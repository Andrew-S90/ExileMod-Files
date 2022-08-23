/**
 * ExileClient_object_player_network_spectateRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_otherPlayer", "_otherPlayerName", "_message"];
if !(getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") exitWith {};
_otherPlayer = _this select 0;
_otherPlayerName = _this select 1;
ExileClientCanSpectate pushBackUnique _otherPlayer;
_message = format ["%1 has allowed you to spectate", _otherPlayerName];
[_message] spawn ExileClient_gui_baguette_show;