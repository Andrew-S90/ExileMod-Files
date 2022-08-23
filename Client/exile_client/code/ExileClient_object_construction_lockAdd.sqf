/**
 * ExileClient_object_construction_lockAdd
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_door", "_pincode"];
_door = _this select 0;
try
{
	if !("Exile_Item_Codelock" in (magazines player)) then
	{
		throw "No can do.";
	};
	if !(isNumber(configFile >> "CfgVehicles" >> (typeOf _door) >> "exileIsDoor")) then
	{
		throw "Really no can do.";
	};
	if !(_door call ExileClient_util_world_isInOwnTerritory) then
	{
		throw "Not your territory.";
	};
	if !((_door getVariable ["ExileIsLocked",""]) isEqualTo "") then
	{
		throw "Really, really no can do.";
	};
	_pincode = 4 call ExileClient_gui_keypadDialog_show;
	if (_pincode isEqualTo "") then
	{
		throw "Please enter a four-digit PIN code.";
	};
	["addLockRequest",[_door,_pincode]] call ExileClient_system_network_send;
	call ExileClient_gui_interactionMenu_unhook;
}
catch
{
	["ErrorTitleAndText", ["Failed to add a lock!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};