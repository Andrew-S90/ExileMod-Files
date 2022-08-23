/**
 * ExileClient_action_stealFlag_duration
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flagObject", "_level", "_duration"];
_flagObject = _this;
_level = _flagObject getVariable ["ExileTerritoryLevel", 0];
_duration = (1 + _level * 1.5) * 60;
_duration