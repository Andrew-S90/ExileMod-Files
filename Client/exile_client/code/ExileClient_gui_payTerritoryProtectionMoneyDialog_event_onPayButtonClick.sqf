/**
 * ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onPayButtonClick
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
_display = uiNameSpace getVariable ["RscExilePayTerritoryProtectionMoneyDialog", displayNull];
_territoryDropDown = _display displayCtrl 4001;
_flagNetID = _territoryDropDown lbData (lbCurSel _territoryDropDown);
["payTerritoryProtectionMoneyRequest", [_flagNetID]] call ExileClient_system_network_send;
closeDialog 0;