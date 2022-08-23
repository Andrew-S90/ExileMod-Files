/**
 * ExileClient_gui_vehicleRekeyDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_traderObject", "_localVehicles", "_nearVehicles", "_display", "_rekeyCostControl", "_purchaseButton", "_resetButton", "_dropdown", "_vehicleObject", "_vehicleName", "_index"];
disableSerialization;
_traderObject = _this;
_localVehicles = [];
switch (typeOf _traderObject) do
{
	case "Exile_Trader_VehicleCustoms":
	{
		_nearVehicles = nearestObjects [player, ["LandVehicle"], 50];
	};
	case "Exile_Trader_AircraftCustoms":
	{
		_nearVehicles = nearestObjects [player, ["Air"], 80];
	};
	case "Exile_Trader_BoatCustoms":
	{
		_nearVehicles = nearestObjects [player, ["Ship"], 50];
	};
	default { format["Invalid trader type: %1", (typeOf _traderObject)] call ExileClient_util_log; };
};
{
	if (local _x) then
	{
		if (alive _x) then
		{
			_localVehicles pushBack _x;
		};
	};
}
forEach _nearVehicles;
if (_localVehicles isEqualTo []) exitWith
{
	["ErrorTitleAndText", ["Whoops!", "Park within 50m and get in as driver first."]] call ExileClient_gui_toaster_addTemplateToast;
};
ExileClientCurrentTrader = _this;
createDialog "RscExileRekeyVehicleDialog";
waitUntil { !isNull findDisplay 24027 };
_display = uiNameSpace getVariable ["RscExileRekeyVehicleDialog", displayNull];
_rekeyCostControl = _display displayCtrl 4000;
_rekeyCostControl ctrlSetStructuredText (parseText "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>");
_purchaseButton = _display displayCtrl 4001;
_purchaseButton ctrlEnable false;
_resetButton = _display displayCtrl 4003;
_resetButton ctrlEnable false;
_dropdown = _display displayCtrl 4002;
lbClear _dropdown;
{
	_vehicleObject = _x;
	_vehicleName = getText(configFile >> "CfgVehicles" >> (typeOf _vehicleObject) >> "displayName");
	_index = _dropdown lbAdd (format ["%1", _vehicleName]);
	_dropdown lbSetData [_index, netId _vehicleObject];
}
forEach _localVehicles;
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
true