/**
 * ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_combo", "_selection"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_combo = _display displayCtrl 4076;
_selection = lbCurSel _combo;
switch (_selection) do 
{
	case 0: 
	{
		profileNamespace setVariable["ExilePartyESPRed",    (profileNamespace getVariable ["IGUI_TEXT_RGB_R", 1])];
		profileNamespace setVariable["ExilePartyESPGreen",  (profileNamespace getVariable ["IGUI_TEXT_RGB_G", 1])];
		profileNamespace setVariable["ExilePartyESPBlue",   (profileNamespace getVariable ["IGUI_TEXT_RGB_B", 1])];
	};
	case 1:
	{
		profileNamespace setVariable["ExilePartyESPRed",    0.7];
		profileNamespace setVariable["ExilePartyESPGreen",  0.93];
		profileNamespace setVariable["ExilePartyESPBlue",   0];
	};
	case 2:
	{
		profileNamespace setVariable["ExilePartyESPRed",    0.91];
		profileNamespace setVariable["ExilePartyESPGreen",  0];
		profileNamespace setVariable["ExilePartyESPBlue",   0];
	};
	case 3:
	{
		profileNamespace setVariable["ExilePartyESPRed",    0];
		profileNamespace setVariable["ExilePartyESPGreen",  0.78];
		profileNamespace setVariable["ExilePartyESPBlue",   0.93];
	};
	case 4:
	{
		profileNamespace setVariable["ExilePartyESPRed",    0.93];
		profileNamespace setVariable["ExilePartyESPGreen",  0];
		profileNamespace setVariable["ExilePartyESPBlue",   0.48];
	};
	case 5:
	{
		profileNamespace setVariable["ExilePartyESPRed",    1];
		profileNamespace setVariable["ExilePartyESPGreen",  1];
		profileNamespace setVariable["ExilePartyESPBlue",   1];
	};
	case 6:
	{
		profileNamespace setVariable["ExilePartyESPRed",    1];
		profileNamespace setVariable["ExilePartyESPGreen",  0.79];
		profileNamespace setVariable["ExilePartyESPBlue",   0.07];
	};
};
profileNamespace setVariable ["ExilePartyESPColor", _selection];
true