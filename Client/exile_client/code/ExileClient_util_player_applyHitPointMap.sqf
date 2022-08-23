/**
 * ExileClient_util_player_applyHitPointMap
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_hitPoints"];
_player = _this select 0;
_hitPoints = _this select 1;
{
	_player setHitPointDamage [_x select 0, _x select 1];
}
forEach _hitPoints;