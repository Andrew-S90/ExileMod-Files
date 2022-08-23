/**
 * ExileClient_object_player_network_startSpectatingFriend
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerVehicle", "_layer"];
if !(getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") exitWith {};
_playerVehicle = vehicle ExileClientPlayerToSpectate;
format ["Attempting to spectate %1", ExileClientPlayerToSpectate] call ExileClient_util_log;
if (str _playerVehicle != str cameraOn) then
{
	_playerVehicle switchCamera cameraView;
	diag_log format ["%1 is now spectating %2", player, ExileClientPlayerToSpectate];
};
ExileClientPlayerToSpectate = "";
_layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
_layer cutText ["", "plain"];
[ExileClientBleedOutThread] call ExileClient_system_thread_removeTask;
ExileClientBleedOutThread = -1;
[] call ExileClient_gui_postProcessing_reset;
ExileClientPlayerIsSpectating = true;