/**
 * ExileClient_gui_hud_thread_survivalInfo
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_locationName"];
if (alive player) then
{
	_locationName = [(getPos player)] call ExileClient_util_world_getNearestLocationName;
	if !(_locationName isEqualTo ExileClientLastLocation) then
	{
		false call ExileClient_gui_hud_showSurvivalInfo;
	};
};
