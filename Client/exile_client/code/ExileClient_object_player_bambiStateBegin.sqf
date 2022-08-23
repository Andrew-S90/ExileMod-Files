/**
 * ExileClient_object_player_bambiStateBegin
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_duration"];
disableSerialization;
if !(ExileClientPlayerIsBambi) then 
{
	_duration = _this;
	ExileClientPlayerIsBambi = true;
	ExileClientPlayerBambiStateExpiresAt = time + _duration; 
	true call ExileClient_gui_hud_toggleBambiIcon;
	ExileClientEndBambiStateThread = [_duration, ExileClient_object_player_bambiStateEnd, [], true] call ExileClient_system_thread_addTask;
};
true