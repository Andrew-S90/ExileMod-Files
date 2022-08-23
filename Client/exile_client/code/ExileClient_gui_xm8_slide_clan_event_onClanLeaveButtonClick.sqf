/**
 * ExileClient_gui_xm8_slide_clan_event_onClanLeaveButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_leaveButton"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_leaveButton = _display displayCtrl 4063;
if ((ctrlText _leaveButton) isEqualTo "DISBAND") then 
{
	["Disband family?", "Disband", "Don't disband"] call ExileClient_gui_xm8_showConfirm;
}
else 
{
	["Leave family?", "Leave", "Don't leave"] call ExileClient_gui_xm8_showConfirm;
};
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if (ExileClientXM8ConfirmResult) then
{
	["leaveClanRequest",[]] call ExileClient_system_network_send;
};