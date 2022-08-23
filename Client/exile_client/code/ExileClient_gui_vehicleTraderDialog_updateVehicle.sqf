/**
 * ExileClient_gui_vehicleTraderDialog_updateVehicle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleClass", "_dialog", "_traderObject", "_vehicleConfig", "_salesPrice", "_pin", "_quality", "_requiredRespect", "_purchaseButton", "_armor", "_fuelCapacity", "_maximumLoad", "_maximumSpeed", "_stats", "_controlID"];
disableSerialization;
_vehicleClass = _this;
_dialog = uiNameSpace getVariable ["RscExileVehicleTraderDialog", displayNull];
_traderObject = uiNameSpace getVariable ["ExileCurrentTrader", objNull];
_vehicleConfig = configFile >> "CfgVehicles" >> _vehicleClass;
_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "price");
_pin = ctrlText (_dialog displayCtrl 4008);
if(count _pin isEqualTo 4)then
{
	_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "quality");
	_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
	_purchaseButton = _dialog displayCtrl 4002;
	if(_requiredRespect <= ExileClientPlayerScore)then
	{
		_purchaseButton ctrlEnable (_salesPrice <= (player getVariable ["ExileMoney", 0]));
	}
	else
	{
		_purchaseButton ctrlEnable false;
	};
};
_armor = getNumber(_vehicleConfig >> "armor");
_fuelCapacity = getNumber(_vehicleConfig >> "fuelCapacity"); 
_maximumLoad = getNumber(_vehicleConfig >> "maximumLoad");
_maximumSpeed = getNumber(_vehicleConfig >> "maxSpeed");
_stats = [];
_stats pushBack ["Speed", 		format["%1km/h", 	_maximumSpeed], 	_maximumSpeed/1059 	];
_stats pushBack ["Capacity", 	format["%1", 		_maximumLoad], 		_maximumLoad/6000 		];
_stats pushBack ["Armor", 		format["%1", 		_armor], 			_armor/5000 			];
_stats pushBack ["Fuel Tank", 	format["%1l", 		_fuelCapacity], 	_fuelCapacity/4500 	];
_controlID = 6000;
{
	(_dialog displayCtrl _controlID) ctrlShow true;
	(_dialog displayCtrl (_controlID + 2)) ctrlSetText (_x select 0);
	(_dialog displayCtrl (_controlID + 2)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 3)) ctrlSetStructuredText parseText (_x select 1);
	(_dialog displayCtrl (_controlID + 3)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 1)) progressSetPosition (_x select 2);
	(_dialog displayCtrl (_controlID + 1)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 1)) ctrlCommit 1;
	_controlID = _controlID + 4;
}
forEach _stats;
_vehicleClass call ExileClient_gui_modelBox_update;
uiNameSpace setVariable ["RscExileVehicleTraderDialogVehicleClass", _vehicleClass];