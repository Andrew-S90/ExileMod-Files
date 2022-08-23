/**
 * ExileClient_gui_xm8_slide_territory_event_onRadiusButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_territoryDropDown", "_flagNetID", "_flag", "_radius", "_flagPos", "_objects", "_i", "_location", "_object"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_territoryDropDown = _display displayCtrl 4132;
_flagNetID = _territoryDropDown lbData (lbCurSel _territoryDropDown);
_flag = objectFromNetId _flagNetID;
["Show radius?", "Show", "Hide"] call ExileClient_gui_xm8_showConfirm;
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if ((ExileClientXM8ConfirmResult) && !(_flag getVariable "ExileRadiusShown")) then
{
	_radius = _flag getVariable ["ExileTerritorySize", -1];
	_flagPos = getPos _flag;
	_objects = [];
	for "_i" from 0 to 360 step (270 / _radius) do 
	{
		_location = [(_flagPos select 0) + ((cos _i) * _radius), (_flagPos select 1) + ((sin _i) * _radius), 0];
		_object = createVehicle ["Sign_Arrow_F", _location, [], 0, "CAN_COLLIDE"];
		_objects pushBack _object;
		_i = _i +1;
	};
	_flag setVariable ["ExileRadiusObjects",_objects];
	_flag setVariable ["ExileRadiusShown", true];
	['apps', 1] call ExileClient_gui_xm8_slide;
}
else
{
	_objects = _flag getVariable ["ExileRadiusObjects", []];
	{
		deleteVehicle _x;
	}
	forEach _objects;
	_flag setVariable ["ExileRadiusShown", false];
	['apps', 1] call ExileClient_gui_xm8_slide;
};