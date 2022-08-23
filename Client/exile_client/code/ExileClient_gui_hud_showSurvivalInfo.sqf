/**
 * ExileClient_gui_hud_showSurvivalInfo
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_showDaysSurvived", "_locationName", "_messages"];
_showDaysSurvived = _this;
_locationName = [(getPos player)] call ExileClient_util_world_getNearestLocationName;
if !(_locationName isEqualTo "") then
{
	_messages = 
	[
			[(toUpper _locationName), "align='left' size='0.7' font='PuristaSemibold'"],
			["","<br/>"],
			[([daytime] call BIS_fnc_timeToString), "align='left' size='0.7' font='PuristaMedium'"]
	];
	[_messages] spawn BIS_fnc_typeText2;
};
ExileClientLastLocation = _locationName;