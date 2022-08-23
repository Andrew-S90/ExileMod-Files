/**
 * ExileClient_gui_xm8_slide_territory_event_onLeaveButtonClick
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
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_territoryDropDown = _display displayCtrl 4132;
_flagNetID = _territoryDropDown lbData (lbCurSel _territoryDropDown);
["Leave territory?", "Leave", "Stay"] call ExileClient_gui_xm8_showConfirm;
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if (ExileClientXM8ConfirmResult) then
{
	["removeFromTerritoryRequest", [_flagNetID, getPlayerUID player]] call ExileClient_system_network_send;
	['apps', 1] call ExileClient_gui_xm8_slide;
};