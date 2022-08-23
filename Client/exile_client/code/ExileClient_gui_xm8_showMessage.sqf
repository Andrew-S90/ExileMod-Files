/**
 * ExileClient_gui_xm8_showMessage
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_message", "_buttonCaption", "_display", "_button", "_messageLine", "_popup"];
disableSerialization;
_message = _this select 0;
_buttonCaption = _this select 1;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_button = _display displayCtrl 4011;
_button ctrlSetText _buttonCaption;
_messageLine = _display displayCtrl 4012;
_messageLine ctrlSetStructuredText (parseText format ["<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>%1</t></t>", _message]);
_popup = _display displayCtrl 4010;
_popup ctrlSetFade 0;
_popup ctrlShow true;
_popup ctrlCommit 0;	
ctrlSetFocus _popup;
ExileClientXM8IsMessageVisible = true;
