/**
 * ExileClient_gui_xm8_slide_players_event_onClanButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBox", "_playerNetID", "_partyButton"];
disableSerialization;
if(!(ExileClientClanInfo isEqualTo []))then
{
	if((getPlayerUID player) isEqualTo (ExileClientClanInfo select 1))then
	{
		_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
		_listBox = _display displayCtrl 4111;
		_playerNetID = _listBox lbData (lbCurSel _listBox);
		_partyButton = _display displayCtrl 4116;
		_partyButton ctrlEnable false;
		["inviteToClanRequest", [_playerNetID]] call ExileClient_system_network_send;
	};
};