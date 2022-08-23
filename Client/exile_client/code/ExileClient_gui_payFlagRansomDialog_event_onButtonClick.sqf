/**
 * ExileClient_gui_payFlagRansomDialog_event_onButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_territoryDropDown", "_flagNetID"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExilePayFlagRansomDialog", displayNull];
_territoryDropDown = _display displayCtrl 4000;
_flagNetID = _territoryDropDown lbData (lbCurSel _territoryDropDown);
["payFlagRansomRequest", [_flagNetID]] call ExileClient_system_network_send;
closeDialog 0;
true