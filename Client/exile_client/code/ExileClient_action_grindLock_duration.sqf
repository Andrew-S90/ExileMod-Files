/**
 * ExileClient_action_grindLock_duration
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_door", "_startTime", "_fullTime"];
_door = _this;
_startTime = _door getVariable ["ExileGrindTime", 0];
_fullTime = getNumber(missionConfigFile >> "CfgGrinding" >> "grindDuration");
(_fullTime * 60) - _startTime