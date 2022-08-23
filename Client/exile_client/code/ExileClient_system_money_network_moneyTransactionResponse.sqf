/**
 * ExileClient_system_money_network_moneyTransactionResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_newObjectNetID", "_amount", "_newContainer"];
_newObjectNetID = _this select 0;
_amount = _this select 1;
ExileClientIsWaitingForInventoryMoneyTransaction = false;
call ExileClient_gui_inventory_updatePopTabControls;
if !(_amount isEqualTo 0) then 
{
	["SuccessTitleOnly", [format ["%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _amount]]] call ExileClient_gui_toaster_addTemplateToast;
};
if !(_newObjectNetID isEqualTo "") then 
{
	_newContainer = objectFromNetid _newObjectNetID;
	if !(isNull _newContainer) then 
	{
		closeDialog 0;
	};
};