/**
 * ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_dropdown", "_index", "_vehicleObject", "_mode", "_cargo", "_revenue", "_revenueControl", "_sellButton"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileWasteDumpDialog", displayNull];
_dropdown = _this select 0;
_index = _this select 1;
_vehicleObject = objectFromNetId (_dropdown lbData _index);
if (isNull _vehicleObject) then
{
	closeDialog 0;
}
else 
{
	_mode = _dropdown lbValue _index;
	_cargo = _vehicleObject call ExileClient_util_containerCargo_list;
	_revenue = _cargo call ExileClient_util_gear_calculateTotalSellPrice;
	if (_mode isEqualTo 2) then
	{
		_revenue = _revenue + ([(typeOf _vehicleObject)] call ExileClient_util_gear_calculateTotalSellPrice);
	};
	_revenueControl = _display displayCtrl 4001;
	_revenueControl ctrlSetStructuredText (parseText (format ["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>", _revenue]));
	_sellButton = _display displayCtrl 4000;
	_sellButton ctrlEnable true;
};
true