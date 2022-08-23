/**
 * ExileClient_object_vehicle_network_resetCodeResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_objectID", "_object"];
_objectID = _this select 1;
_object = objectFromNetId _objectID;
if !(isNull _object) then
{
	_object setVariable ["ExileAlreadyKnownCode",_this select 2];
};
(_this select 0) call ExileClient_gui_toaster_addTemplateToast;
true