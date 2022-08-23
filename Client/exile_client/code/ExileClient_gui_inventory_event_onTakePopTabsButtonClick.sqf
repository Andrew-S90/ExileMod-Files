/**
 * ExileClient_gui_inventory_event_onTakePopTabsButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_takePopTabsInput", "_popTabsToTake", "_containerPopTabs"];
disableSerialization;
if (ExileClientIsWaitingForInventoryMoneyTransaction) exitWith {};
if (isNull ExileClientCurrentInventoryContainer) exitWith {};
_display = findDisplay 602;
_takePopTabsInput = _display displayCtrl 25002;
_popTabsToTake = ceil (abs (parseNumber (ctrlText _takePopTabsInput)));
_containerPopTabs = ExileClientCurrentInventoryContainer getVariable ["ExileMoney", 0];
if (_popTabsToTake < 1) exitWith {};
if (_popTabsToTake > _containerPopTabs) exitWith {};
ExileClientIsWaitingForInventoryMoneyTransaction = true;
call ExileClient_gui_inventory_updatePopTabControls;
["takeMoneyRequest", [netId ExileClientCurrentInventoryContainer, _popTabsToTake]] call ExileClient_system_network_send;
