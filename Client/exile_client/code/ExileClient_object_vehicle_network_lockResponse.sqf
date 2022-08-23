/**
 * ExileClient_object_vehicle_network_lockResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_message", "_mode", "_vehicleID", "_pincode", "_lockedState", "_vehicle"];
_message = _this select 0;
_mode = _this select 1;
_vehicleID = _this select 2;
_pincode = _this select 3;
_lockedState = _this select 4;
_vehicle = objectFromNetId _vehicleID;
if !(_lockedState isEqualTo -1) then 
{
	[_vehicle, _lockedState] spawn ExileClient_object_vehicle_chirpChirp;
	_vehicle setVariable ["ExileAlreadyKnownCode", _pincode];
};
if (_mode isEqualTo true) then 
{
	["SuccessTitleOnly", [_message]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	_vehicle setVariable ["ExileAlreadyKnownCode", ""];
	["ErrorTitleOnly", [_message]] call ExileClient_gui_toaster_addTemplateToast;
};
call ExileClient_gui_interactionMenu_unhook;
true