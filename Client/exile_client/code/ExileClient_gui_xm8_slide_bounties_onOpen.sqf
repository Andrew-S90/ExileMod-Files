/**
 * ExileClient_gui_xm8_slide_bounties_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBoxCurrent", "_bounty", "_entry", "_index", "_listBoxTargets"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_listBoxCurrent = _display displayCtrl IDC_EXILE_XM8_SLIDE_BOUNTY_CURRENT_LIST;
lbClear _listBoxCurrent; 
if!(ExileBountyArray isEqualTo [])then 
{
	{
		_bounty = _x;
		_entry = format ["%1  --  %2",_bounty select 2,_bounty select 4];
		_index = _listBoxCurrent lbAdd _entry;
		_listBoxCurrent lbSetValue [_index,_bounty select 0];
		_listBoxCurrent lbSetTooltip 
		[
			_index,
			if((_bounty select 3) isEqualTo 0)then
			{
				"DEAD"
			}
			else
			{
				"ALIVE"
			}
		];
	}
	forEach ExileBountyArray;
}
else
{
	_listBoxCurrent lbAdd "No active bounties";
};
_listBoxTargets = _display displayCtrl IDC_EXILE_XM8_SLIDE_BOUNTY_NEW_LIST;
lbClear _listBoxTargets;
{
	_index = _listBoxTargets lbAdd (name _x);
	_listBoxTargets lbSetData [_index,getPlayerUID _x];
}
forEach allPlayers;
true