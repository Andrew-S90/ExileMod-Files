/**
 * ExileClient_action_hackLock_failed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if ((random 1) < (getNumber(missionConfigFile >> "CfgHacking" >> "removeChance") / 100)) then 
{
	[player, "Exile_Item_Laptop"] call ExileClient_util_playerCargo_remove;
};
player setVariable ["ExileIsHacking", false, true];
["updateHackAttemptRequest", [netId _this]] call ExileClient_system_network_send;
["ErrorTitleOnly", ["Hacking failed!"]] call ExileClient_gui_toaster_addTemplateToast;