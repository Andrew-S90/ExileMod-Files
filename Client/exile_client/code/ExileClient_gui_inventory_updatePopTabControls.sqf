/**
 * ExileClient_gui_inventory_updatePopTabControls
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_enable", "_display", "_containerPopTabs", "_containerPopTabsString", "_playerPopTabs", "_playerPopTabsString", "_playerPopTabsLabel", "_containerPopTabsLabel", "_maximumCapacity", "_maximumPopTabsToPut", "_maximumLoad", "_maximumCapacityString", "_takePopTabsInput", "_maximumPopTabsToPutString", "_putPopTabsInput", "_takePopTabsButton", "_putPopTabsButton"];
disableSerialization;
_enable = _this;
_display = findDisplay 602;
if (isNull _display) then 
{
	_display = uiNameSpace getVariable ["RscDisplayInventory", displayNull];
};
if (isNull _display) exitWith {};
if (isNull ExileClientCurrentInventoryContainer) exitWith {};
_containerPopTabs = ExileClientCurrentInventoryContainer getVariable ["ExileMoney", 0];
_containerPopTabsString = _containerPopTabs call ExileClient_util_string_exponentToString;
_playerPopTabs = player getVariable ["ExileMoney", 0];
_playerPopTabsString = _playerPopTabs call ExileClient_util_string_exponentToString;
_playerPopTabsLabel = _display displayCtrl 25001;
_playerPopTabsLabel ctrlSetStructuredText (parseText format ["<t size='1' font='RobotoCondensed' align='right'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _playerPopTabsString]);
_containerPopTabsLabel = _display displayCtrl 25000;
_maximumCapacity = -1;
_maximumPopTabsToPut = _playerPopTabs;
if !(ExileClientCurrentInventoryContainer isKindOf "man") then
{
	if (isClass(missionConfigFile >> "CfgPoptabStorage" >> typeOf ExileClientCurrentInventoryContainer)) then 
	{
		_maximumLoad = getNumber(missionConfigFile >> "CfgPoptabStorage" >> typeOf ExileClientCurrentInventoryContainer >> "max");
		if (_maximumLoad > 0) then
		{
			_maximumCapacity = _maximumLoad;
			_maximumPopTabsToPut = _playerPopTabs min _maximumCapacity;
		};
	}
	else
	{
		_maximumLoad = getNumber (configFile >> "CfgVehicles" >> typeOf ExileClientCurrentInventoryContainer >> "maximumLoad");
		if (_maximumLoad > 0) then
		{
			_maximumCapacity = _maximumLoad * 10;
			_maximumPopTabsToPut = _playerPopTabs min _maximumCapacity;
		};
	};
};
if !(_maximumCapacity isEqualTo -1) then 
{
	_maximumCapacityString = _maximumCapacity call ExileClient_util_string_exponentToString;
	_containerPopTabsLabel ctrlSetStructuredText (parseText format ["<t size='1' font='RobotoCondensed' align='right'>%1 / %2<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _containerPopTabsString, _maximumCapacityString]);
}
else 
{
	_containerPopTabsLabel ctrlSetStructuredText (parseText format ["<t size='1' font='RobotoCondensed' align='right'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _containerPopTabsString]);
};
_takePopTabsInput = _display displayCtrl 25002;
_takePopTabsInput ctrlSetText _containerPopTabsString;
_maximumPopTabsToPutString = _maximumPopTabsToPut call ExileClient_util_string_exponentToString;
_putPopTabsInput = _display displayCtrl 25005;
_putPopTabsInput ctrlSetText _maximumPopTabsToPutString;
_takePopTabsButton = _display displayCtrl 25003;
_takePopTabsButton ctrlEnable !ExileClientIsWaitingForInventoryMoneyTransaction;
_putPopTabsButton = _display displayCtrl 25004;
_putPopTabsButton ctrlEnable !ExileClientIsWaitingForInventoryMoneyTransaction;
