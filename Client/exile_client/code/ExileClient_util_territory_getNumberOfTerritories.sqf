/**
 * ExileClient_util_territory_getNumberOfTerritories
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerObject", "_myUid", "_numberOfTerritories", "_ownerUid"];
_playerObject = _this;
_myUid = getPlayerUID _playerObject;
_numberOfTerritories = 0;
{
	_ownerUid = _x getVariable ["ExileOwnerUID", ""];
	if (_ownerUid isEqualTo _myUid) then 
	{
		_numberOfTerritories = _numberOfTerritories + 1;
	};
}
forEach allMissionObjects "Exile_Construction_Flag_Static";
_numberOfTerritories