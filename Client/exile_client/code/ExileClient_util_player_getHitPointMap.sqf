/**
 * ExileClient_util_player_getHitPointMap
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hitPoints", "_filteredHitPoints"];
_hitPoints = getAllHitPointsDamage _this;
_filteredHitPoints = [];
if !(_hitPoints isEqualTo []) then 
{
	{
		_filteredHitPoints pushBack [_x, (_hitPoints select 2) select _forEachIndex];
	}
	forEach (_hitPoints select 1);
};
_filteredHitPoints