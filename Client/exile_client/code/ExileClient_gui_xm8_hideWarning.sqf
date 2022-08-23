/**
 * ExileClient_gui_xm8_hideWarning
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_popup"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_popup = _display displayCtrl 4030;
_popup ctrlSetFade 1;
_popup ctrlShow false;
_popup ctrlCommit 0;	
ExileClientXM8IsWarningVisible = false;