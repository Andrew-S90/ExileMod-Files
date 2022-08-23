/**
 * ExileClient_gui_inventory_event_onPutPopTabsButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_putPopTabsInput", "_popTabsToPut", "_playerPopTabs"];
disableSerialization;
if (ExileClientIsWaitingForInventoryMoneyTransaction) exitWith {};
if (isNull ExileClientCurrentInventoryContainer) exitWith {};
_display = findDisplay 602;
_putPopTabsInput = _display displayCtrl 25005;
_popTabsToPut = ceil (abs (parseNumber (ctrlText _putPopTabsInput)));
_playerPopTabs = player getVariable ["ExileMoney", 0];
if (_popTabsToPut < 1) exitWith {};
if (_popTabsToPut > _playerPopTabs) exitWith {}; 
ExileClientIsWaitingForInventoryMoneyTransaction = true;
call ExileClient_gui_inventory_updatePopTabControls;
["putMoneyRequest", [netId ExileClientCurrentInventoryContainer, _popTabsToPut]] call ExileClient_system_network_send;
