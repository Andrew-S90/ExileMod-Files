/**
 * ExileClient_util_clan_getClanMembers
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hash", "_members", "_uids"];
_hash = _this;
_members = [];
if(_hash isEqualTo [])exitWith{_members};
_uids = (_hash select 2) apply {_x select 0};
{
	_uid = getPlayerUID _x;
	if(_uid in _uids)then
	{
		_members pushBack _x;
	};
}
forEach allPlayers;
_members