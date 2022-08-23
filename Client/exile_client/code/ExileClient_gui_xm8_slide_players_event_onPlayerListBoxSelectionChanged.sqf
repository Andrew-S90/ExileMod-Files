/**
 * ExileClient_gui_xm8_slide_players_event_onPlayerListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_playerNetID", "_player", "_display", "_partyButton", "_grantTerritoryBuildRightsButton", "_clanButton", "_territoryDropDown"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_playerNetID = _listBox lbData _index;
_player = objectFromNetid _playerNetID;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_partyButton = _display displayCtrl 4112;
_grantTerritoryBuildRightsButton = _display displayCtrl 4115;
_clanButton = _display displayCtrl 4116;
if (ExileClientPartyID isEqualTo -1) then 
{
	_partyButton ctrlEnable false;
}
else 
{
	if (_player isEqualTo player) then 
	{
		_partyButton ctrlEnable false;
	}
	else 
	{
		_partyButton ctrlEnable true;
	};
};
_grantTerritoryBuildRightsButton ctrlEnable false;
if !(_playerNetID isEqualTo (netId player)) then 
{
	_territoryDropDown = _display displayCtrl 4114;
	if ((lbSize _territoryDropDown) > 0) then 
	{
		_grantTerritoryBuildRightsButton ctrlEnable true;
	};
};
if!(ExileClientClanInfo isEqualTo [])then
{
	if((ExileClientClanInfo select 1) isEqualTo (getPlayerUID player))then
	{
		if((ExileClientClanInfo select 1) isEqualTo (getPlayerUID _player))then
		{
			_clanButton ctrlEnable false;
		}
		else
		{
			_clanButton ctrlEnable true;
		};
	}
	else
	{
		_clanButton ctrlEnable false;
	};
};
