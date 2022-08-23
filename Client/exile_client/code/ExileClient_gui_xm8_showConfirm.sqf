/**
 * ExileClient_gui_xm8_showConfirm
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_question", "_yesButtonCaption", "_noButtonCaption", "_display", "_yesButton", "_noButton", "_questionLine", "_popup"];
disableSerialization;
_question = _this select 0;
_yesButtonCaption = _this select 1;
_noButtonCaption = _this select 2;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_yesButton = _display displayCtrl 4022;
_yesButton ctrlSetText _yesButtonCaption;
_noButton = _display displayCtrl 4023;
_noButton ctrlSetText _noButtonCaption;
_questionLine = _display displayCtrl 4021;
_questionLine ctrlSetStructuredText (parseText format ["<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>%1</t></t>", _question]);
_popup = _display displayCtrl 4020;
_popup ctrlSetFade 0;
_popup ctrlShow true;
_popup ctrlCommit 0;	
ctrlSetFocus _popup;
ExileClientXM8ConfirmResult = nil;
ExileClientXM8IsConfirmVisible = true;