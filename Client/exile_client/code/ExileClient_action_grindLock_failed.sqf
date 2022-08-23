/**
 * ExileClient_action_grindLock_failed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_door", "_startTime", "_soundSource"];
_door = _this; 
_startTime = _door getVariable ["ExileGrindStartTime", 0];
_door setVariable ["ExileGrindTime", diag_tickTime - _startTime, true];
_door setVariable ["ExileGrinderUID", "", true];
_soundSource = _door getVariable ["ExileGrinderSound", objNull];
if !(isNull _soundSource) then 
{
	deleteVehicle _soundSource;
};
if ((random 1) < (getNumber(missionConfigFile >> "CfgGrinding" >> "breakChance") / 100)) then 
{
	[player, "Exile_Item_Grinder"] call ExileClient_util_playerCargo_remove;
	["ErrorTitleAndText", ["Grinding failed!", "Your grinder broke"]] call ExileClient_gui_toaster_addTemplateToast;
}
else
{
	[player, "Exile_Magazine_Battery"] call ExileClient_util_playerCargo_remove;
	["ErrorTitleAndText", ["Grinding failed!", "Your grinder ran out of power!"]] call ExileClient_gui_toaster_addTemplateToast;
};