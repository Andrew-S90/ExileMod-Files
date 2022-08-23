/**
 * ExileClient_gui_upgradeTerritoryDialog_event_onUpgradeButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_territoryDropDown", "_flagObject"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileUpgradeTerritoryDialog", displayNull];
_territoryDropDown = _display displayCtrl 4000;
_flagObject = objectFromNetId (_territoryDropDown lbData (lbCurSel _territoryDropDown));
["territoryUpgradeRequest",[_flagObject]] call ExileClient_system_network_send;
closeDialog 0;
true