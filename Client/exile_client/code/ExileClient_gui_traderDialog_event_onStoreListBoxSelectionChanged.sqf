/**
 * ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_dialog", "_purchaseButton", "_quantityDropdown", "_inventoryLoadLabel", "_inventoryLoadValue", "_itemClassName", "_inventoryDropdown", "_selectedInventoryDropdownIndex", "_currentContainerType", "_canBuyItem", "_tradingResult", "_salesPrice", "_quality", "_requiredRespect", "_itemInformation", "_itemType", "_containerNetID", "_containerVehicle", "_inventoryListBox"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_listBox = _this select 0;
_index = _this select 1;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_purchaseButton = _dialog displayCtrl 4010;
_quantityDropdown = _dialog displayCtrl 4011;
_inventoryLoadLabel = _dialog displayCtrl 4013;
_inventoryLoadValue = _dialog displayCtrl 4014;
_inventoryLoadLabel ctrlSetTextColor [1, 1, 1, 1];
_inventoryLoadValue ctrlSetTextColor [1, 1, 1, 1];
if (_index > -1) then
{
	_itemClassName = _listBox lbData _index;
	_itemClassName call ExileClient_gui_traderDialog_updateItemStats;
	_inventoryDropdown = _dialog displayCtrl 4004;
	_selectedInventoryDropdownIndex = lbCurSel _inventoryDropdown;
	_currentContainerType = _inventoryDropdown lbValue _selectedInventoryDropdownIndex;
	_canBuyItem = true;
	_tradingResult = 0;
	try 
	{
		_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "price");
		if (_salesPrice > (player getVariable ["ExileMoney", 0])) then 
		{
			throw 5;
		};
		_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "quality");
		_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
		if (_requiredRespect > ExileClientPlayerScore) then
		{
			throw 14;
		};
		switch (_currentContainerType) do
		{
			case 1:
			{
				_itemInformation = [_itemClassName] call BIS_fnc_itemType;
				_itemType = _itemInformation select 1;
				if !([player, _itemClassName] call ExileClient_util_playerCargo_canAdd) then
				{
					throw 9;
				};
			};
			case 2:
			{	
				if !(player canAddItemToUniform _itemClassName) then 
				{
					throw 9;
				};
			};
			case 3:
			{
				if !(player canAddItemToVest _itemClassName) then 
				{
					throw 9;
				};
			};
			case 4:
			{
				if !(player canAddItemToBackpack _itemClassName) then 
				{
					throw 9;
				};
			};
			default 
			{
				_containerNetID = _inventoryDropdown lbData _selectedInventoryDropdownIndex;
				_containerVehicle = objectFromNetId _containerNetID;
				if (_containerVehicle isEqualTo objNull) then 
				{
					throw 8;
				};
				if !([_containerVehicle, _itemClassName] call ExileClient_util_containerCargo_canAdd) then 
				{
					throw 9;
				};
			};
		};
	}
	catch
	{
		_tradingResult = _exception;
		_canBuyItem = false;
	};
	if (ExileClientIsWaitingForServerTradeResponse) then
	{
		_canBuyItem = false;
	};
	if (_canBuyItem) then 
	{
		_purchaseButton ctrlEnable true;
		_quantityDropdown ctrlEnable true;	
	}
	else 
	{
		if (_tradingResult isEqualTo 9) then
		{
			_inventoryLoadLabel ctrlSetTextColor [0.91, 0, 0, 0.6];
			_inventoryLoadValue ctrlSetTextColor [0.91, 0, 0, 0.6];
		};
		_purchaseButton ctrlEnable false;
		_quantityDropdown ctrlEnable false;
	};
	_inventoryListBox = _dialog displayCtrl 4005;
	_inventoryListBox lbSetCurSel -1;
}
else 
{
	_purchaseButton ctrlEnable false;
	_quantityDropdown ctrlEnable false;
};
true