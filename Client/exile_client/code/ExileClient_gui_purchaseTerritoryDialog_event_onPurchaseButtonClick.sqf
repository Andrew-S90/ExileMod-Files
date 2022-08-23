/**
 * ExileClient_gui_purchaseTerritoryDialog_event_onPurchaseButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_canAdd"];
_canAdd = [player,"Exile_Item_Flag"] call ExileClient_util_playerCargo_canAdd;
if(_canAdd)then
{
	["PurchaseTerritory", []] call ExileClient_system_network_send;
}
else
{	
	["ErrorTitleAndText", ["Your inventory is full!", "You need more inventory space to carry a flag."]] call ExileClient_gui_toaster_addTemplateToast;
};
closeDialog 0;
true