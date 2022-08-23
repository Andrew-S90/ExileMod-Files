/**
 * ExileClient_gui_payFlagRansomDialog_event_onTerritoryDropDownSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_territoryDropDown", "_index", "_flagObject", "_level", "_costControl", "_payButton", "_playerMoney", "_itemClassName", "_fee"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExilePayFlagRansomDialog", displayNull];
_territoryDropDown = _this select 0;
_index = _this select 1;
_flagObject = objectFromNetId (_territoryDropDown lbData _index);
_level = _flagObject getVariable ["ExileTerritoryLevel", 1];
_costControl = _display displayCtrl 4002;
_payButton = _display displayCtrl 4001;
_playerMoney = player getVariable ["ExileMoney", 0];
_itemClassName = format["Exile_Item_FlagStolen%1", _level];
_fee = getNumber (missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "price");
_costControl ctrlSetStructuredText (parseText format["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _fee]);
if (_playerMoney >= _fee) then 
{
	_payButton ctrlEnable true;
	_costControl ctrlSetTextColor [1, 1, 1, 1];
}
else 
{
	_payButton ctrlEnable false;
	_costControl ctrlSetTextColor [0.91, 0, 0, 1];
};