/**
 * ExileClient_gui_traderDialog_event_onPurchaseButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_sellButton", "_purchaseButton", "_storeListBox", "_selectedStoreListBoxIndex", "_itemClassName", "_quantity", "_inventoryDropdown", "_selectedInventoryDropdownIndex", "_currentContainerType", "_containerNetID"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_sellButton = _dialog displayCtrl 4007;
_sellButton ctrlEnable false;
_sellButton ctrlCommit 0;
_purchaseButton = _dialog displayCtrl 4010;
_purchaseButton ctrlEnable false;
_purchaseButton ctrlCommit 0;
_storeListBox = _dialog displayCtrl 4009;
_selectedStoreListBoxIndex = lbCurSel _storeListBox;
if !(_selectedStoreListBoxIndex isEqualTo -1) then
{
	_itemClassName = _storeListBox lbData _selectedStoreListBoxIndex;
	_quantity = 1; 
	if !(_itemClassName isEqualTo "") then
	{
		if !(ExileClientIsWaitingForServerTradeResponse) then
		{
			_inventoryDropdown = _dialog displayCtrl 4004;
			_selectedInventoryDropdownIndex = lbCurSel _inventoryDropdown;
			_currentContainerType = _inventoryDropdown lbValue _selectedInventoryDropdownIndex;
			_containerNetID = "";
			if (_currentContainerType isEqualTo 5) then
			{
				_containerNetID = _inventoryDropdown lbData _selectedInventoryDropdownIndex;
			};
			ExileClientIsWaitingForServerTradeResponse = true;
			["purchaseItemRequest", [_itemClassName, _quantity, _currentContainerType, _containerNetID]] call ExileClient_system_network_send;
		};
	};
};
true