/**
 * ExileClient_object_player_network_playerStart
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_cam"];
if !(getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") exitWith {};
[] spawn 
{
	false call ExileClient_gui_hud_toggle;
	titleText ["", "BLACK OUT", 1];
	uiSleep 3;
	player switchMove "Acts_ExecutionVictim_Unbow";
	ExileClientPlayerAttributes set [4, 3];
	if (ExileClientDeliriumThread isEqualTo -1) then
	{
		call ExileClient_object_player_thread_delirium;
		ExileClientDeliriumThread = [1, ExileClient_object_player_thread_delirium, [], true] call ExileClient_system_thread_addtask;
	};
	uiSleep 1;	
	titleText ["", "BLACK IN", 3];
	_cam = "camera" camCreate (player modelToWorld [0,30,5]);
	_cam camSetTarget player;
	_cam camSetRelPos [0, -2, 3];
	_cam cameraEffect ["internal", "back"];
	_cam camCommit 1;
	uiSleep 3;
	_cam cameraEffect ["terminate","back"];
	camDestroy _cam;
	true call ExileClient_gui_hud_toggle;
	[] call ExileClient_object_player_event_onLeaveSafezone;
	["Let the games begin!"] spawn ExileClient_gui_baguette_show;
	uiSleep 20;
	ExileClientPlayerAttributes set [4, 0];
};