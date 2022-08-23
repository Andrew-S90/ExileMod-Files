/**
 * ExileClient_gui_xm8_slide_party_event_onMemberListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_display", "_playerNetID", "_enableKickButton", "_kickButton"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_playerNetID = _listBox lbData _index;
_enableKickButton = false;
if (player isEqualTo (leader (group player))) then
{
	if !((netId player) isEqualTo _playerNetID) then
	{
		_enableKickButton = true;
	};
};
_kickButton = _display displayCtrl 4104;
_kickButton ctrlEnable _enableKickButton;