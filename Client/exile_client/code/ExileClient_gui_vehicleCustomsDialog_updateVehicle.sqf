/**
 * ExileClient_gui_vehicleCustomsDialog_updateVehicle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_originalVehicleObject", "_dialog", "_skinListBox", "_parentClassName", "_vehicleCustomsConfig", "_availableSkins", "_skinPrice", "_skinName", "_indexEntryIndex", "_purchaseButton"];
disableSerialization;
_originalVehicleObject = _this;
ExileClientVehicleCustomsOriginalVehicle = _originalVehicleObject;
ExileClientVehicleCustomsOriginalClass = typeOf _originalVehicleObject;
_dialog = uiNameSpace getVariable ["RscExileVehicleCustomsDialog", displayNull];
_skinListBox = _dialog displayCtrl 4001;
ExileClientVehicleCustomsOriginalClass call ExileClient_gui_modelBox_update;
lbClear _skinListBox;
_parentClassName = configName (inheritsFrom (configFile >> "CfgVehicles" >> ExileClientVehicleCustomsOriginalClass));
if (isClass (missionConfigFile >> "CfgVehicleCustoms" >> _parentClassName) ) then
{
	_vehicleCustomsConfig = (missionConfigFile >> "CfgVehicleCustoms" >> _parentClassName);
	_availableSkins = getArray(_vehicleCustomsConfig >> "skins");
	{
		_skinPrice = _x select 1;
		_skinName = _x select 2;
		_indexEntryIndex = _skinListBox lbAdd _skinName;
		_skinListBox lbSetData [_indexEntryIndex, _skinName];	
		_skinListBox lbSetTextRight [_indexEntryIndex, format["%1", _skinPrice]];
		_skinListBox lbSetPictureRight [_indexEntryIndex, "exile_assets\texture\ui\poptab_trader_ca.paa"];
		if (_skinPrice > (player getVariable ["ExileMoney", 0])) then
		{
			_skinListBox lbSetColorRight [_indexEntryIndex, [0.91, 0, 0, 0.6]];
		};
	}
	forEach _availableSkins;
	_purchaseButton = _dialog displayCtrl 4002;
	_purchaseButton ctrlEnable true;
};
