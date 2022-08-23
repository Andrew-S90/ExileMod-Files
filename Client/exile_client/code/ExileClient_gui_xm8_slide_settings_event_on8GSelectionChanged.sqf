/**
 * ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_8GCombo"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_8GCombo = _display displayCtrl 4072;
player setVariable ["ExileXM8IsOnline", ((lbCurSel _8GCombo) isEqualTo 1), true];
profileNamespace setVariable ["ExileEnable8GNetwork", ((lbCurSel _8GCombo) isEqualTo 1)];
call ExileClient_gui_xm8_thread_update;