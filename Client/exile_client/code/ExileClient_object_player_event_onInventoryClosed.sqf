/**
 * ExileClient_object_player_event_onInventoryClosed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container"];
_container = _this select 1;
ExileClientInventoryOpened = false;
ExileClientCurrentInventoryContainer = objNull;
ExileClientCurrentInventorySecondaryContainer = objNull;
if !(_container isKindOf "Man") then 
{
	if !((typeOf _container) in ["GroundWeaponHolder", "WeaponHolderSimulated", "LootWeaponHolder"]) then 
	{
		["vehicleSaveRequest", [netId _container]] call ExileClient_system_network_send;
	};
};
true