/**
 * ExileClient_object_player_event_onPlayerKilled
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_respawnDelay"];
if (!(isMultiplayer)) exitWith {};
"onPlayerKilled - Player was killed..." call ExileClient_util_log;
setPlayerRespawnTime 10e10;
if (ExilePlayerInSafezone) then
{
	call ExileClient_object_player_event_onLeaveSafezone;
};
ExilePlayerInSafezone = false; 
call ExileClient_gui_toaster_removeAllToasts;
_respawnDelay = _this select 3;
_respawnDelay call ExileClient_object_player_death_startBleedingOut;
true