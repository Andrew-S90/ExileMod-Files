/**
 * ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_cambo"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_cambo = _display displayCtrl 4077;
profileNamespace setVariable ["ExileStreamFriendlyUI", ((lbCurSel _cambo) isEqualTo 1)];