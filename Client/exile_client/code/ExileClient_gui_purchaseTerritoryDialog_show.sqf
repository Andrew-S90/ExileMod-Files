/**
 * ExileClient_gui_purchaseTerritoryDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_maximumNumberOfTerritoriesPerPlayer", "_numberOfTerritories", "_display", "_config", "_price", "_priceText", "_range", "_rangeText", "_purchaseButton"];
disableSerialization;
_maximumNumberOfTerritoriesPerPlayer = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumNumberOfTerritoriesPerPlayer");
_numberOfTerritories = player call ExileClient_util_territory_getNumberOfTerritories;
if (_numberOfTerritories >= _maximumNumberOfTerritoriesPerPlayer) exitWith
{
	["ErrorTitleAndText", ["Limit reached!", format["You can only own %1 territories at a time!", _maximumNumberOfTerritoriesPerPlayer]]] call ExileClient_gui_toaster_addTemplateToast;
};
createDialog "RscExilePurchaseTerritoryDialog";
_display = uiNameSpace getVariable ["RscExilePurchaseTerritoryDialog", displayNull];
_config = (getArray(missionConfigFile >> "CfgTerritories" >> "prices")) select 0;
_price = _config select 0;
_priceText = _display displayCtrl 4000;
_priceText ctrlSetStructuredText parsetext format ["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>",_price];
_range = _config select 1;
_rangeText = _display displayCtrl 4002;
_rangeText ctrlSetStructuredText parsetext format ["<t size='1.4'>%1m</t>", _range];
if(_price > (player getVariable ["ExileMoney", 0]))then
{
	_purchaseButton = _display displayCtrl 4001;
	_purchaseButton ctrlEnable false;
	_priceText ctrlSetTextColor [0.91, 0, 0, 1];
};
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
true