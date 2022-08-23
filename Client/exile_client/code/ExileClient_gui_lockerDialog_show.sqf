/**
 * ExileClient_gui_lockerDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_lockerAmount", "_lockerLimit", "_withdrawInput", "_lockerAmountLabel", "_inventoryAmount", "_inventoryAmountString", "_inventoryAmountLabel", "_depositInput", "_depositAmountString"];
disableSerialization;
createDialog "RscExileLockerDialog";
_dialog = uiNameSpace getVariable ["RscExileLockerDialog", displayNull];
_lockerAmount = player getVariable ["ExileLocker", 0];
_lockerLimit = (getNumber(missionConfigFile >> "CfgLocker" >> "maxDeposit"));
_withdrawInput = _dialog displayCtrl 4005;
_withdrawInput ctrlSetText "";
_lockerAmountLabel = _dialog displayCtrl 4000;
_lockerAmountLabel ctrlSetStructuredText (parseText format["<t size='1.4'>%1 / %2 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _lockerAmount call ExileClient_util_string_exponentToString, _lockerLimit call ExileClient_util_string_exponentToString]);
_inventoryAmount = player getVariable ["ExileMoney", 0];
_inventoryAmountString = _inventoryAmount call ExileClient_util_string_exponentToString;
_inventoryAmountLabel = _dialog displayCtrl 4001;
_inventoryAmountLabel ctrlSetStructuredText (parseText format["<t size='1.4'>%1 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _inventoryAmountString]);
_depositInput = _dialog displayCtrl 4006;
_depositAmountString = (_inventoryAmount min (_lockerLimit - _lockerAmount)) call ExileClient_util_string_exponentToString;
_depositInput ctrlSetText _depositAmountString;
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
true
