/**
 * ExileClient_system_breaching_network_breachingResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_charge", "_object"];
_charge = _this select 0;
_object = _this select 1;
["InfoTitleOnly", ["Please wait..."]] call ExileClient_gui_toaster_addTemplateToast;
ExileClientBreachingKeyUpEH = (findDisplay 46) displayAddEventHandler ["KeyUp",{_this call ExileClient_system_breaching_event_onKeyUp}];
ExileCurrentBreachingObject = _object;
_charge spawn ExileClient_system_breaching_thread;
true