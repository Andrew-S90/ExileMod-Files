/**
 * ExileClient_construction_simulationCountDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_staticObjectClassName", "_simulatePhysics", "_freezeObjectNow", "_positionBefore", "_vectorDirectionBefore", "_vectorUpBefore", "_startTime", "_velocity", "_velocityAbsolute", "_distanceMoved", "_position", "_vectorDirection", "_vectorUp"];
_object = _this select 0;
_staticObjectClassName = _this select 1;
_simulatePhysics = _this select 2;
if ((_object isKindOf "Exile_Construction_Abstract_Physics") && _simulatePhysics) then
{
	_freezeObjectNow = false;
	_positionBefore = getPosASL _object;
	_vectorDirectionBefore = vectorDir _object;
	_vectorUpBefore = vectorUp _object;
	_startTime = diag_tickTime;
	player reveal _object; 
	_object enableSimulation true;
	uiSleep 5;
	while {!_freezeObjectNow} do 
	{
		_velocity = velocityModelSpace _object;
		_velocityAbsolute =  vectorMagnitude _velocity; 
		if ( _velocityAbsolute < 0.01 ) then
		{		
			_freezeObjectNow = true;
		}
		else 
		{
			uiSleep 0.1;
		};
	};
	_distanceMoved = (getPosASL _object) distance _positionBefore;
	if (_distanceMoved < 0.02) then
	{
		_object enableSimulation false;
		_object setVectorDirAndUp [_vectorDirectionBefore, _vectorUpBefore];
		_object setPosASL _positionBefore;
	};
};
_object enableSimulation false;
_position = getPosATL _object;
_vectorDirection = vectorDir _object;
_vectorUp = vectorUp _object;
_velocity = velocity _object;
["swapConstructionRequest",[netid _object, _staticObjectClassName, [_position,_vectorDirection,_vectorUp,_velocity]]] call ExileClient_system_network_send;
true