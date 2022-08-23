/**
 * ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_soundCombo"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_soundCombo = _display displayCtrl 4075;
profileNamespace setVariable ["ExileEnableSoundNotifications", ((lbCurSel _soundCombo) isEqualTo 1)];