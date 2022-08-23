/**
 * ExileClient_gui_traderDialog_event_onStoreListBoxItemDoubleClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_storeListBox", "_clickedOnIndex", "_dialog", "_purchaseButton"];
_storeListBox = _this select 0;
_clickedOnIndex = _this select 1;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_purchaseButton = _dialog displayCtrl 4010;
if (ctrlEnabled _purchaseButton) then
{
	call ExileClient_gui_traderDialog_event_onPurchaseButtonClick;
};
true