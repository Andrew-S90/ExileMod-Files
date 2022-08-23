/**
 * ExileClient_gui_vehicleTraderDialog_event_onPurchaseButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleClass", "_salesPrice", "_quality", "_requiredRespect", "_pin"];
_vehicleClass = uiNameSpace getVariable ["RscExileVehicleTraderDialogVehicleClass", ""];
_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "price");
_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "quality");
_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
_pin = ctrlText ((uiNamespace getVariable ["RscExileVehicleTraderDialog",displayNull]) displayCtrl 4008);
closeDialog 0;
if (count _pin != 4) exitWith {
	["ErrorTitleAndText", ["Vehicle Purchase Aborted", "Pin not 4 characters."]] call ExileClient_gui_toaster_addTemplateToast;
};
if (_salesPrice > (player getVariable ["ExileMoney", 0])) exitWith {
	["ErrorTitleAndText", ["Vehicle Purchase Aborted", "Not enought money."]] call ExileClient_gui_toaster_addTemplateToast;
};
if (_requiredRespect > ExileClientPlayerScore) exitWith {
	["ErrorTitleAndText", ["Vehicle Purchase Aborted", "Not enought respect."]] call ExileClient_gui_toaster_addTemplateToast;
};
["purchaseVehicleRequest", [_vehicleClass,_pin]] call ExileClient_system_network_send;