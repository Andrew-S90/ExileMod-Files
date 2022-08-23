/**
 * ExileClient_system_breaching_thread
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_charge", "_localChange", "_startpos", "_ins", "_intersection", "_worldPos", "_vectorUP", "_object"];
_charge = _this;
try
{
	_localChange = false;
	_startpos = getPosATL player;
	while {true} do
	{
		if!(alive player)then
		{
			throw ["ABORT", "You are too dead for this."];
		};
		if(_startpos distance (getPosATL player) > 10)then
		{
			throw ["ABORT", "You have moved too far."];
		};	
		if(local _charge)then
		{
			if(!_localChange)then
			{
				["InfoTitleOnly", ["Press SPACE to start planting!"]] call ExileClient_gui_toaster_addTemplateToast;
				_localChange = true;
				ExileClientBreachingChargePlanted = false;
			};
			_ins = lineIntersectsSurfaces
			[
				AGLToASL positionCameraToWorld [0,0,0], 
				AGLToASL positionCameraToWorld [0,0,6], 
				player,
				_charge
			];
			if((count _ins) > 0)then
			{
				_intersection = _ins select 0;
				_worldPos = _intersection select 0;
				_vectorUP = _intersection select 1;
				_object = _intersection select 2;
				if(ExileCurrentBreachingObject isEqualTo _object)then
				{
					_charge setPosASL _worldPos; 
					_charge setVectorUp _vectorUP;
					if(ExileClientBreachingChargePlanted)then
					{
						throw ["PLACE", [_object worldToModelVisual _worldPos,_vectorUP,_charge]];
					};
				}
				else
				{
					_charge setPosASL [0,0,0];
					if(ExileClientBreachingChargePlanted)then
					{
						throw ["ABORT", "Please place the charge on the object."];
					};
				};
			};
		};
		uiSleep 0.01;
	};
}
catch
{
	switch (_exception select 0) do 
	{ 
		case "PLACE" :
		{
			["breachingPlaceRequest",_exception select 1] call ExileClient_system_network_send;
		}; 
		case "ABORT" :
		{
			["ErrorTitleAndText", ["Breaching failed!", _exception select 1]] call ExileClient_gui_toaster_addTemplateToast;
			["breachingCancel",[_charge]] call ExileClient_system_network_send;
			ExileCurrentBreachingObject = objNull;
		}; 
	};
	ExileClientBreachingChargePlanted = false;
	(findDisplay 46) displayRemoveEventHandler ["KeyUp",ExileClientBreachingKeyUpEH];
	ExileClientBreachingKeyUpEH = -1;
};
true;