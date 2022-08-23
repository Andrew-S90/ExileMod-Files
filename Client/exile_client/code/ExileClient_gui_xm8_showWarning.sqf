/**
 * ExileClient_gui_xm8_showWarning
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_warning", "_buttonCaption", "_display", "_button", "_warningLine", "_popup"];
disableSerialization;
_warning = _this select 0;
_buttonCaption = _this select 1;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_button = _display displayCtrl 4031;
_button ctrlSetText _buttonCaption;
_warningLine = _display displayCtrl 4032;
_warningLine ctrlSetStructuredText (parseText format ["<t align='center'><t color='#e14141'>Whoops!</t><br/><t color='#fcfdff' size='1.4'>%1</t></t>", _warning]);
_popup = _display displayCtrl 4030;
_popup ctrlSetFade 0;
_popup ctrlShow true;
_popup ctrlCommit 0;	
ctrlSetFocus _popup;
ExileClientXM8IsWarningVisible = true;
