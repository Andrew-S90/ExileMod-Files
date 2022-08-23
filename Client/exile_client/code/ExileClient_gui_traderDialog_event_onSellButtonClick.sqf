/**
 * ExileClient_gui_traderDialog_event_onSellButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_sellButton", "_purchaseButton", "_inventoryListBox", "_selectedInventoryListBoxIndex", "_itemClassName", "_quantity", "_inventoryDropdown", "_selectedInventoryDropdownIndex", "_currentContainerType", "_containerNetID", "_container", "_retardCheck", "_flags"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_sellButton = _dialog displayCtrl 4007;
_sellButton ctrlEnable false;
_sellButton ctrlCommit 0;
_purchaseButton = _dialog displayCtrl 4010;
_purchaseButton ctrlEnable false;
_purchaseButton ctrlCommit 0;
_inventoryListBox = _dialog displayCtrl 4005;
_selectedInventoryListBoxIndex = lbCurSel _inventoryListBox;
if !(_selectedInventoryListBoxIndex isEqualTo -1) then
{
	_itemClassName = _inventoryListBox lbData _selectedInventoryListBoxIndex;
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
				_container = objectFromNetId _containerNetID;
				_retardCheck = _container call ExileClient_util_containerCargo_list;
			}
			else
			{
				_retardCheck = player call ExileClient_util_playerCargo_list;
			};
			if (_itemClassName in _retardCheck) then
			{
				ExileClientIsWaitingForServerTradeResponse = true;
				["sellItemRequest", [_itemClassName, _quantity, _currentContainerType, _containerNetID]] call ExileClient_system_network_send;
				_flags = ["Exile_Item_FlagStolen1","Exile_Item_FlagStolen2","Exile_Item_FlagStolen3","Exile_Item_FlagStolen4","Exile_Item_FlagStolen5","Exile_Item_FlagStolen6","Exile_Item_FlagStolen7","Exile_Item_FlagStolen8","Exile_Item_FlagStolen9","Exile_Item_FlagStolen10"];
				if (_itemClassName in _flags) then
				{
					player setflagOwner ObjNull;
				};
			};
		};
	};
};
true