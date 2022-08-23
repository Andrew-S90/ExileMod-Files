/**
 * ExileClient_gui_traderDialog_event_onPlayerInventoryListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_dialog", "_sellButton", "_itemClassName", "_storeListBox"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_listBox = _this select 0;
_index = _this select 1;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_sellButton = _dialog displayCtrl 4007;
if (ExileClientIsWaitingForServerTradeResponse) then
{
	_sellButton ctrlEnable false;
}
else 
{
	if (_index > -1) then
	{
		_itemClassName = _listBox lbData _index;
		_itemClassName call ExileClient_gui_traderDialog_updateItemStats;
		_sellButton ctrlEnable !(_listBox lbValue _index isEqualTo -1);
		_storeListBox = _dialog displayCtrl 4009;
		_storeListBox lbSetCurSel -1;
	}
	else 
	{
		_sellButton ctrlEnable false;
	};
};
true