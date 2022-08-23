/**
 * ExileClient_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_dropdown", "_index", "_vehicleObject", "_vehicleClassName", "_vehicleCost", "_rekeyCostControl", "_resetButton", "_purchaseButton"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileRekeyVehicleDialog", displayNull];
_dropdown = _this select 0;
_index = _this select 1;
_vehicleObject = objectFromNetId (_dropdown lbData _index);
if (isNull _vehicleObject) then
{
	closeDialog 0;
}
else 
{
	_vehicleClassName = typeOf _vehicleObject;
	ExileRekeyVehicleObjectID = netID _vehicleObject;
	_vehicleCost = getNumber (missionConfigFile >> "CfgExileArsenal" >> _vehicleClassName >> "price");
	ExileRekeyCost = _vehicleCost * (getNumber (missionConfigFile >> "CfgTrading" >> "rekeyPriceFactor"));
	_rekeyCostControl = _display displayCtrl 4000;
	_rekeyCostControl ctrlSetStructuredText parseText format ["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>", ExileRekeyCost];
	_resetButton = _display displayCtrl 4003;
	_resetButton ctrlEnable true;
	if ((player getVariable ["ExileMoney", 0]) > ExileRekeyCost) then
	{
		_purchaseButton = _display displayCtrl 4001;
		_purchaseButton ctrlEnable true;
	};
};
true