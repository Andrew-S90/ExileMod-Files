/**
 * ExileClient_gui_xm8_slide_players_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBox", "_index", "_partyButton", "_clanButton", "_territoryDropDown", "_ourUID", "_hasTerritories", "_buildRights", "_grantTerritoryBuildRightsButton"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_listBox = _display displayCtrl 4111;
lbClear _listBox;
if ((player getVariable ["ExileXM8IsOnline", false]) isEqualTo true) then
{
	{
		if ((_x getVariable ["ExileXM8IsOnline", false]) isEqualTo true) then
		{
			_index = _listBox lbAdd (name _x);
			_listBox lbSetData [_index, netId _x];
			if (_x isEqualTo player) then
			{
				_listBox lbSetColor [_index, [0/255, 178/255, 205/255, 1]];
			}
			else 
			{
				if !(alive _x) then
				{
					_listBox lbSetColor [_index, [225/255, 65/255, 65/255, 1]];
				};
			};
		};
	}
	forEach allPlayers;
};
lbSort [_listBox, "ASC"];
_partyButton = _display displayCtrl 4112;
_partyButton ctrlEnable false;
_clanButton = _display displayCtrl 4116;
_clanButton ctrlEnable false; 
_territoryDropDown = _display displayCtrl 4114;
_ourUID = getPlayerUID player;
_hasTerritories = false;
lbClear _territoryDropDown;
{
	_buildRights = _x getVariable ["ExileTerritoryModerators", []];
	if (_ourUID in _buildRights) then
	{
		_index = _territoryDropDown lbAdd (_x getVariable ["ExileTerritoryName", ""]); 
		_territoryDropDown lbSetData [_index, netId _x];
		_hasTerritories = true;
	};
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");
_grantTerritoryBuildRightsButton = _display displayCtrl 4115;
_grantTerritoryBuildRightsButton ctrlShow false;
_grantTerritoryBuildRightsButton ctrlEnable false; 
if (_hasTerritories) then
{
	_territoryDropDown lbSetCurSel 0;
	_grantTerritoryBuildRightsButton ctrlShow true;
};
_partyButton = _display displayCtrl 4116;
_partyButton ctrlEnable false;