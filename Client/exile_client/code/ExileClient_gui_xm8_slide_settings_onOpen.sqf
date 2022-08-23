/**
 * ExileClient_gui_xm8_slide_settings_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_8GCombo", "_soundCombo", "_colorCombo", "_espAlphaSlider", "_markerAlphaSlider", "_streamModeCombo"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_8GCombo = _display displayCtrl 4072;
lbClear _8GCombo;
_8GCombo lbAdd "Off";
_8GCombo lbAdd "On";
if (player getVariable ["ExileXM8IsOnline", false]) then
{
	_8GCombo lbSetCurSel 1;
}
else 
{
	_8GCombo lbSetCurSel 0;
};
_soundCombo = _display displayCtrl 4075;
lbClear _soundCombo;
_soundCombo lbAdd "Off";
_soundCombo lbAdd "On";
if (profileNamespace getVariable ["ExileEnableSoundNotifications", false]) then
{
	_soundCombo lbSetCurSel 1;
}
else 
{
	_soundCombo lbSetCurSel 0;
};
_colorCombo = _display displayCtrl 4076;
lbClear _colorCombo;
_colorCombo lbAdd "Profile Color";
_colorCombo lbAdd "Green";
_colorCombo lbAdd "Red";
_colorCombo lbAdd "Blue";
_colorCombo lbAdd "Pink";
_colorCombo lbAdd "White";
_colorCombo lbAdd "Yellow";
_colorCombo lbSetCurSel (profileNamespace getVariable ["ExilePartyESPColor", 0]);
_espAlphaSlider = _display displayCtrl 4078;
_espAlphaSlider sliderSetRange [0, 1];
_espAlphaSlider sliderSetPosition (profileNamespace getVariable ["ExilePartyESPAlpha", 0.75]);
_markerAlphaSlider = _display displayCtrl 4079;
_markerAlphaSlider sliderSetRange [0, 1];
_markerAlphaSlider sliderSetPosition (profileNamespace getVariable ["ExilePartyMarkerAlpha", 0.75]);
_streamModeCombo = _display displayCtrl 4077;
lbClear _streamModeCombo;
_streamModeCombo lbAdd "Off";
_streamModeCombo lbAdd "On";
if (profileNameSpace getVariable ["ExileStreamFriendlyUI", false]) then
{
	_streamModeCombo lbSetCurSel 1;
}
else 
{
	_streamModeCombo lbSetCurSel 0;
};