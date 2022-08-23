/**
 * ExileClient_gui_xm8_slide_clan_event_onClanKickButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_membersListbox", "_selectedUid", "_playerName"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_membersListbox = _display displayCtrl 4061;
_selectedUid = _membersListbox lbData (lbCursel _membersListbox);
_playerName = _membersListbox lbText (lbCursel _membersListbox);
if!(_selectedUid isEqualTo "")then
{
	if!(ExileClientClanInfo isEqualTo [])then
	{
		if((getPlayerUID player) isEqualTo (ExileClientClanInfo select 1))then
		{
			[format ["Kick %1?", _playerName], "Kick", "Don't kick"] call ExileClient_gui_xm8_showConfirm;
			waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
			if (ExileClientXM8ConfirmResult) then
			{
				["kickClanPlayerRequest",[_selectedUid]] call ExileClient_system_network_send;
			};
		};
	};
};
