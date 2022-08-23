/**
 * ExileClient_gui_vehicleTraderDialog_event_onInputBoxChars
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_inputBox", "_character", "_dialog", "_purchaseButton", "_vehicleClass", "_salesPrice", "_quality", "_requiredRespect", "_ctrlText"];
disableSerialization;
_inputBox = _this select 0;
_character = _this select 1;
_dialog = uiNameSpace getVariable ["RscExileVehicleTraderDialog", displayNull];
_purchaseButton = _dialog displayCtrl 4002;
_vehicleClass = uiNamespace getVariable ["RscExileVehicleTraderDialogVehicleClass",""];
_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "price");
_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "quality");
_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
_ctrlText = (ctrlText _inputBox);
try 
{
	if (_requiredRespect > ExileClientPlayerScore) then
	{
		throw false;
	};
	if (_salesPrice > (player getVariable ["ExileMoney", 0])) then 
	{
		throw false;
	};
	if !((count _ctrlText) isEqualTo 4) then
	{
		throw false;
	};
	{
		if !(_x in [48, 49, 50, 51, 52, 53, 54, 55, 56, 57]) then
		{
			throw false;
		};
	}
	forEach (toArray _ctrlText);
	_purchaseButton ctrlEnable true;
}
catch 
{
	_purchaseButton ctrlEnable false;
};
if !(_character in [48,49,50,51,52,53,54,55,56,57]) then
{
	_ctrlText = _ctrlText select [0, (count _ctrlText) - 1];
	_inputBox ctrlSetText _ctrlText;
	_inputBox ctrlCommit 0;
};
true