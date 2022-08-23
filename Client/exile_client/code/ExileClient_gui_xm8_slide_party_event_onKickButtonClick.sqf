/**
 * ExileClient_gui_xm8_slide_party_event_onKickButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBox", "_index", "_playerNetID", "_playerName"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_listBox = _display displayCtrl 4102;
_index = lbCurSel _listBox;
_playerNetID = _listBox lbData _index;
_playerName = _listBox lbText _index;
[format ["Kick %1?", _playerName], "Kick", "Don't kick"] call ExileClient_gui_xm8_showConfirm;
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if (ExileClientXM8ConfirmResult) then
{
	["kickFromPartyRequest", [_playerNetID]] call ExileClient_system_network_send;
	_listBox lbDelete _index;
};