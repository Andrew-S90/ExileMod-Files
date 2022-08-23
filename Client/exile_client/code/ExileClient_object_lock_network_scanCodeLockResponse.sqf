/**
 * ExileClient_object_lock_network_scanCodeLockResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_signature"];
_signature = _this select 0;
if ("Exile_Item_ThermalScannerPro" in (magazines player)) then 
{
	[player, "Exile_Item_ThermalScannerPro", -1] call ExileClient_util_gear_repackMagazines;
	_signature call ExileClient_gui_keypadScanDialog_show;
};