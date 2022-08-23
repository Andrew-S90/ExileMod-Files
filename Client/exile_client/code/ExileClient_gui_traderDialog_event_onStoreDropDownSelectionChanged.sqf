/**
 * ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_dialog", "_storeListBox", "_inventoryListBox"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_listBox = _this select 0;
_index = _this select 1;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_storeListBox = _dialog displayCtrl 4009;
_storeListBox lbSetCurSel -1;
_inventoryListBox = _dialog displayCtrl 4005;
_inventoryListBox lbSetCurSel -1;
"" call ExileClient_gui_traderDialog_updateItemStats;
call ExileClient_gui_traderDialog_updateStoreListBox;
true