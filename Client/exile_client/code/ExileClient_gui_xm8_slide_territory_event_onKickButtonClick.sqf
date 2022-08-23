/**
 * ExileClient_gui_xm8_slide_territory_event_onKickButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_playerListBox", "_index", "_playerName", "_playerUID", "_territoryDropDown", "_flagNetID"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_playerListBox = _display displayCtrl 4131;
_index = lbCurSel _playerListBox;
_playerName = _playerListBox lbText _index;
_playerUID = _playerListBox lbData _index;
_territoryDropDown = _display displayCtrl 4132;
_flagNetID = _territoryDropDown lbData (lbCurSel _territoryDropDown);
[format ["Kick %1?", _playerName], "Kick", "Don't kick"] call ExileClient_gui_xm8_showConfirm;
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if (ExileClientXM8ConfirmResult isEqualTo true) then
{
	[format ["%1 was removed from your territory!", _playerName], "Okay"] call ExileClient_gui_xm8_showMessage;
	["removeFromTerritoryRequest", [_flagNetID, _playerUID]] call ExileClient_system_network_send;
	_playerListBox lbDelete _index;
};