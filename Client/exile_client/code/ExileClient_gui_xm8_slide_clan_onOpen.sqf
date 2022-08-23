/**
 * ExileClient_gui_xm8_slide_clan_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_clanMemberListBox", "_clanMember", "_fuckingNameM8", "_fade", "_index", "_isLeader", "_kickButton", "_leaveButton", "_playerIsOwner", "_titleControl"];
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_clanMemberListBox = _display displayCtrl 4061;
lbClear _clanMemberListBox;
_clanMemberListBox lbSetCurSel -1;
{
	_clanMember = (_x select 0) call ExileClient_util_player_objectFromPlayerUid;
	if(isNull _clanMember)then
	{
		_fuckingNameM8 = _x select 1;
		_fade = [0.82, 0.82, 0.82, 0.6];
	}
	else
	{
		_fuckingNameM8 = name _clanMember;
		_fade = [1, 1, 1, 0.6];
	};
	_index = _clanMemberListBox lbAdd _fuckingNameM8;
	_clanMemberListBox lbSetData [_index,(_x select 0)];
	_clanMemberListBox lbSetColor [_index,_fade];
	_isLeader = (ExileClientClanInfo select 1) isEqualTo (_x select 0);
	if(_isLeader)then
	{
		_clanMemberListBox lbSetPicture [_index, "\a3\ui_f\data\gui\cfg\Ranks\sergeant_gs.paa"];
	}
	else 
	{
		_clanMemberListBox lbSetPicture [_index, "\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"];
	};
	if ((_x select 0) isEqualTo (getPlayerUID player)) then
	{
		_clanMemberListBox lbSetColor [_index, [0/255, 178/255, 205/255, 1]];
	};
}
forEach (ExileClientClanInfo select 2);
_kickButton = _display displayCtrl 4062;
_leaveButton = _display displayCtrl 4063;
_playerIsOwner = (getPlayerUID player) isEqualTo (ExileClientClanInfo select 1);
_kickButton ctrlSetText "KICK";
_kickButton ctrlEnable false;
_kickButton ctrlCommit 0;
if(_playerIsOwner && (count (ExileClientClanInfo select 2)) isEqualTo 1)then
{
	_leaveButton ctrlSetText "DISBAND";
	_leaveButton ctrlEnable true;
	_leaveButton ctrlCommit 0;
}
else
{
	_leaveButton ctrlSetText "LEAVE";
	_leaveButton ctrlEnable true;
	_leaveButton ctrlCommit 0;
};
_titleControl = _display displayCtrl 4004;
_titleControl ctrlSetStructuredText (parseText (format ["<t align='center' font='RobotoMedium'>%1</t>", ExileClientClanInfo select 0]));
true