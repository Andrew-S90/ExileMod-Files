/**
 * ExileClient_util_territory_getAccessLevel
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flag", "_playerUID", "_access", "_owner", "_moderators", "_buildRights"];
_flag = _this select 0;
_playerUID = _this select 1;
_access = [0, "None"];
try
{
	_owner = _flag getVariable ["ExileOwnerUID", ""];
	if (_owner isEqualTo _playerUID) then 
	{
		throw [3, "Owner"];
	};
	_moderators = _flag getVariable ["ExileTerritoryModerators", []];
	if (_playerUID in _moderators) then 
	{
		throw [2, "Moderator"]; 
	};
	_buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
	if (_playerUID in _buildRights) then 
	{
		throw [1, "Pleb"]; 
	};
}
catch
{
	_access = _exception;
};
_access