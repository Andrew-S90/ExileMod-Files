/**
 * ExileClient_object_trader_create
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_traderClassName", "_traderType", "_traderFace", "_animations", "_position", "_direction", "_attachToObject", "_trader", "_animationCount"];
_traderClassName = _this select 0;
_traderType = [_this, 1, _traderClassName] call BIS_fnc_param; 
_traderFace = _this select 2;
_animations = _this select 3;
_position = _this select 4;
_direction = _this select 5;
_attachToObject = [_this, 6, objNull] call BIS_fnc_param; 
_trader = _traderClassName createVehicleLocal [0,0,0];
_trader setVariable ["BIS_enableRandomization", false];
_trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
_trader setVariable ["ExileTraderType", _traderType];
_trader setVariable ["ExileTraderParams",_this]; 
_trader disableAI "ANIM";
_trader disableAI "MOVE";
_trader disableAI "FSM";
_trader disableAI "AUTOTARGET";
_trader disableAI "TARGET";
_trader disableAI "CHECKVISIBLE";
_trader allowDamage false; 
_trader removeAllEventHandlers "HandleDamage";
_trader setFace _traderFace;
_trader addEventHandler ["Killed", {(_this select 0) getVariable ["ExileTraderParams",[]] call ExileClient_object_trader_create; deleteVehicle (_this select 0)}];
if (isNull _attachToObject) then
{
	_attachToObject = "Logic" createVehicleLocal [0, 0, 0];
	_attachToObject setPosATL _position;
	_position = [0, 0, 0];
};
_trader reveal _attachToObject;
_attachToObject disableCollisionWith _trader;         
_trader disableCollisionWith _attachToObject; 
_trader attachTo [_attachToObject, _position];
_trader setDir _direction;
_trader switchMove (_animations select 0);
_animationCount = count _animations;
if (_animationCount > 1) then
{
	_trader setVariable ["ExileAnimations", _animations];
	_trader addEventHandler	["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
};
_trader