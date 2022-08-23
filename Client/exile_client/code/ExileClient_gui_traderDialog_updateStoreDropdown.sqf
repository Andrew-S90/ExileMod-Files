/**
 * ExileClient_gui_traderDialog_updateStoreDropdown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_traderConfig", "_dialog", "_storeDropdown", "_categoryClass", "_categoryConfig", "_categoryName", "_categoryIcon", "_categoryIndex", "_categoryComboBox"];
_traderConfig = missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_storeDropdown = _dialog displayCtrl 4008;
lbClear _storeDropdown;
_storeDropdown lbAdd "All";
_storeDropdown lbSetData [0, ""];
_storeDropdown lbSetCurSel 0;
{
	_categoryClass = _x;
	_categoryConfig = missionConfigFile >> "CfgTraderCategories" >> _categoryClass;
	_categoryName = getText(_categoryConfig >> "name");
	_categoryIcon = getText(_categoryConfig >> "icon");
	_categoryIndex = _storeDropdown lbAdd _categoryName;
	_storeDropdown lbSetData [_categoryIndex, _categoryClass];
	_categoryComboBox lbSetPicture [_categoryIndex, _categoryIcon];
}
forEach getArray(_traderConfig >> "categories");
true