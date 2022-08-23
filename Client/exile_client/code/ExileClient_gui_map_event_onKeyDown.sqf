/**
 * ExileClient_gui_map_event_onKeyDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_keyCode", "_shift", "_ctrl", "_alt", "_stopPropagation", "_map", "_waypointPosition"];
_display = _this select 0;
_keyCode = _this select 1;
_shift = _this select 2;
_ctrl = _this select 3;
_alt = _this select 4;
_stopPropagation = false;
switch (_keyCode) do 
{
	case 0x1D:
	{
		if (getNumber(missionConfigFile >> "CfgPlayer" >> "disableMapDrawing") isEqualTo 1) then
		{
			_stopPropagation = true;
		};
	};
	case 0xD3:
	{
		if !(ExileClientWaypoints isEqualTo []) then 
		{
			_map = _display displayCtrl 51;
			{
				_waypointPosition = _map ctrlMapWorldToScreen _x;
				if ((_waypointPosition distance2D getMousePosition) < (50 * pixelW)) then 
				{
					ExileClientWaypoints deleteAt _forEachIndex;
					_stopPropagation = true;
				};
			}
			forEach ExileClientWaypoints;
		};
	};
};
_stopPropagation
