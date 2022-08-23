/**
 * ExileClient_system_territory_network_purchaseTerritoryResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_responseCode"];
_responseCode = _this select 0;
switch (_responseCode) do
{
	case 1: 
	{
		["ErrorTitleAndText", ["Failed to purchase!", "You do not exist."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case 2:
	{
		["ErrorTitleAndText", ["Failed to purchase!", "You are too dead for this."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case 3: 
	{
		["ErrorTitleAndText", ["Failed to purchase!", "You do not have enough pop tabs."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case 0:
	{
		[player, "Exile_Item_Flag", 1] call ExileClient_util_playerCargo_add;
		["SuccessTitleAndText", ["Purchased flag!", "A new territory flag has been added to your inventory."]] call ExileClient_gui_toaster_addTemplateToast;
	};
};	
true