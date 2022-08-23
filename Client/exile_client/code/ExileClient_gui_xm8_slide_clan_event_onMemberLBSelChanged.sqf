/**
 * ExileClient_gui_xm8_slide_clan_event_onMemberLBSelChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listbox", "_index", "_display", "_kickButton", "_playerIsOwner", "_selectedUID"];
_listbox = _this select 0;
_index = _this select 1;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_kickButton = _display displayCtrl 4062;
_playerIsOwner = (getPlayerUID player) isEqualTo (ExileClientClanInfo select 1);
_selectedUID = _listbox lbData _index;
if(_playerIsOwner && !(_selectedUID isEqualTo (getPlayerUID player)))then
{
	_kickButton ctrlEnable true;
	_kickButton ctrlCommit 0;
}
else
{
	_kickButton ctrlEnable false;
	_kickButton ctrlCommit 0;
};
true