/**
 * ExileClient_action_hackLock_duration
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_minutes", "_duration"];
_minutes = getNumber (missionConfigFile >> 'CfgHacking' >> 'hackDuration');
_duration = _minutes * 60;
_duration