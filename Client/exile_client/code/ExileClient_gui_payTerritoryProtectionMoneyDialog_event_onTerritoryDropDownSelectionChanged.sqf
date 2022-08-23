/**
 * ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onTerritoryDropDownSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_territoryDropDown", "_index", "_flagObject", "_radius", "_level", "_objectsInTerritory", "_popTabAmountPerObject", "_totalPopTabAmount", "_costControl", "_payButton", "_playerMoney"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExilePayTerritoryProtectionMoneyDialog", displayNull];
_territoryDropDown = _this select 0;
_index = _this select 1;
_flagObject = objectFromNetId (_territoryDropDown lbData _index);
_radius = _flagObject getVariable ["ExileTerritorySize", 15];
_level = _flagObject getVariable ["ExileTerritoryLevel", 1];
_objectsInTerritory = _flagObject getVariable ["ExileTerritoryNumberOfConstructions", 0];
_popTabAmountPerObject = getNumber (missionConfigFile >> "CfgTerritories" >> "popTabAmountPerObject");
_totalPopTabAmount = _level * _popTabAmountPerObject * _objectsInTerritory;
_costControl = _display displayCtrl 4000;
_costControl ctrlSetStructuredText (parseText format["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _totalPopTabAmount]);
_payButton = _display displayCtrl 4002;
_playerMoney = player getVariable ["ExileMoney", 0];
if (_playerMoney >= _totalPopTabAmount) then 
{
	_payButton ctrlEnable true;
	_costControl ctrlSetTextColor [1, 1, 1, 1];
}
else 
{
	_payButton ctrlEnable false;
	_costControl ctrlSetTextColor [0.91, 0, 0, 1];
};