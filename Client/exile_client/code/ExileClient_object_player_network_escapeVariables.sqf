/**
 * ExileClient_object_player_network_escapeVariables
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !(getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") exitWith {};
ExileClientPlayerWins = _this select 0;
ExileClientPlayerMatches = _this select 1;