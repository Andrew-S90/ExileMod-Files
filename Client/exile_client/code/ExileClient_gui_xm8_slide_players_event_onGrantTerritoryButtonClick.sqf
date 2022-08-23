/**
 * ExileClient_gui_xm8_slide_players_event_onGrantTerritoryButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_playersListBox", "_playerNetID", "_otherPlayer", "_territoryDropdown", "_flagNetID", "_flagObject", "_territoryName"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_playersListBox = _display displayCtrl 4111;
_playerNetID = _playersListBox lbData (lbCurSel _playersListBox);
_otherPlayer = objectFromNetId _playerNetID;
_territoryDropdown = _display displayCtrl 4114;
_flagNetID = _territoryDropdown lbData (lbCurSel _territoryDropdown);
_flagObject = objectFromNetId _flagNetID;
_territoryName = _flagObject getVariable ["ExileTerritoryName", ""];
[format ["Add %1 to %2?", name _otherPlayer, _territoryName], "Add", "Don't add"] call ExileClient_gui_xm8_showConfirm;
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if (ExileClientXM8ConfirmResult) then
{
	["addToTerritoryRequest", [_flagNetID, _playerNetID]] call ExileClient_system_network_send;
	[format ["%1 has been added to %2!", name _otherPlayer, _territoryName], "Okay"] call ExileClient_gui_xm8_showMessage;
};
