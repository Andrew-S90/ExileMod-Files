/**
 * ExileClient_object_vehicle_network_storeVehicleResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_success", "_nickname", "_display"];
_success = _this select 0;
_nickname = _this select 1;
if (_success) then 
{
	["SuccessTitleAndText", ["Success!", format["'%1' has been digitized and stored", _nickname]]] call ExileClient_gui_toaster_addTemplateToast;
	_display = uiNamespace getVariable ["RscExileVirtualGarageDialog", displayNull];
	if !(isNull _display) then 
	{
		closeDialog 1;
	};
}
else
{
	["ErrorTitleAndText", ["Failed to store vehicle", _nickname]] call ExileClient_gui_toaster_addTemplateToast;
};
ExileClientIsWaitingForServerTradeResponse = false;
true