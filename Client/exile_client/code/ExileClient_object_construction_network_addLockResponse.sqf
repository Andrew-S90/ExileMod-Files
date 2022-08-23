/**
 * ExileClient_object_construction_network_addLockResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_pincode"];
_pincode = _this select 0;
[player, "Exile_Item_Codelock"] call ExileClient_util_playerCargo_remove;
if (profileNameSpace getVariable ["ExileStreamFriendlyUI", false]) then
{
	["SuccessTitleAndText", ["Lock has been added!", "We do not show you the PIN in streamer friendly mode."]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	["SuccessTitleAndText", ["Lock has been added!", format ["Your PIN is %1.", _pincode]]] call ExileClient_gui_toaster_addTemplateToast;
};
true