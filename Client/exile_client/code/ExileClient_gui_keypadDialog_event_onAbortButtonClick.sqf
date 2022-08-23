/**
 * ExileClient_gui_keypadDialog_event_onAbortButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileKeypad", displayNull];
ExileClientPinCode = "";
_display closeDisplay 0;
true