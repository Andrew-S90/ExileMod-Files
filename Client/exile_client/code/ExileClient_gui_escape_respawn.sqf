/**
 * ExileClient_gui_escape_respawn
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display"];
disableSerialization;
_display = findDisplay 49;
if !(isNull _display) then
{
	_display closeDisplay 2; 
};
call ExileClient_object_player_death_forceRespawn;