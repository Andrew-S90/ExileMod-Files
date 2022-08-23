/**
 * ExileClient_object_lock_setPin
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_pincode", "_newPinCode"];
_object = _this select 0;
["InfoTitleAndText", ["Step 1 of 2", "Please enter the current PIN."]] call ExileClient_gui_toaster_addTemplateToast;
_pincode = 4 call ExileClient_gui_keypadDialog_show;
if(_pincode isEqualTo "")exitWith {};
["InfoTitleAndText", ["Step 2 of 2", "Please enter the new PIN."]] call ExileClient_gui_toaster_addTemplateToast;
_newPinCode = 4 call ExileClient_gui_keypadDialog_show;
if(_newPinCode isEqualTo "")exitWith {};
["setPin",[netId _object,_pincode,_newPinCode]] call ExileClient_system_network_send;
true