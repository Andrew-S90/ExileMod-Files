/**
 * ExileClient_gui_vehicleRekeyDialog_network_resetCodeDialogResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_responseCode", "_vehicleID"];
_responseCode = _this select 0;
_vehicleID = _this select 1;
if (_responseCode isEqualTo "Reset Code") then
{
	_vehicleID spawn ExileClient_object_vehicle_resetCode;
}
else 
{
	["ErrorTitleAndText", ["Failed to change PIN!", "Please try again or contact a server admin."]] call ExileClient_gui_toaster_addTemplateToast;
};
true