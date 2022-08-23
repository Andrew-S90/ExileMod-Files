/**
 * ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_skinName", "_parentClassName", "_vehicleCustomsConfig", "_availableSkins", "_dialog", "_purchaseButton"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_skinName = _listBox lbData _index;
_parentClassName = configName (inheritsFrom (configFile >> "CfgVehicles" >> ExileClientVehicleCustomsOriginalClass));
_vehicleCustomsConfig = (missionConfigFile >> "CfgVehicleCustoms" >> _parentClassName);
_availableSkins = getArray(_vehicleCustomsConfig >> "skins");
{
	if ((_x select 2) isEqualTo _skinName) then
	{
		ExileClientVehicleCustomsSelectedSkin = _x select 3;
		{
			ExileClientModelBoxVehicle setObjectTexture [_forEachIndex, ExileClientVehicleCustomsSelectedSkin select _forEachIndex];
		} forEach ExileClientVehicleCustomsSelectedSkin;
	}
}
forEach _availableSkins;
_dialog = uiNameSpace getVariable ["RscExileVehicleCustomsDialog", displayNull];
_purchaseButton = _dialog displayCtrl 4002;
_purchaseButton ctrlEnable true;
true