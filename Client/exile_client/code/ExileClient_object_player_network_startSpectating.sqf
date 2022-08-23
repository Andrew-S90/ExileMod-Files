/**
 * ExileClient_object_player_network_startSpectating
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_layer"];
if !(getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") exitWith {};
showChat true;
ExileClientPlayerIsSpectating = true;
_layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
_layer cutText ["", "plain"];
if !(ExileClientBleedOutThread isEqualTo -1) then
{
	[ExileClientBleedOutThread] call ExileClient_system_thread_removeTask;
	ExileClientBleedOutThread = -1;
};
false call ExileClient_gui_hud_toggle;
false call ExileClient_gui_toaster_toggle;
call ExileClient_gui_postProcessing_reset;
[
	"Initialize", 
	[
		player, 	
		[], 		
		false, 		
		true, 		
		true,		
		false,		
		true,		
		true,		
		false,		
		false 		
	]
] 
call BIS_fnc_EGSpectator;