/**
 * ExileClient_util_world_isClimbingPlayerNearby
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_range", "_foundClimbingPlayer"];
_position = _this select 0;
_range = _this select 1;
_foundClimbingPlayer = false;
{
	if (alive _x) then
	{
		if ((_x distance2D _position) <= _range) then
		{
			if ((toLower (animationState _x)) in ["ladderriflestatic", "ladderrifleuploop", "ladderrifledownloop", "laddercivilstatic", "ladderciviluploop", "laddercivildownloop"]) exitWith
			{
				_foundClimbingPlayer = true;
			};
		};
	};
}
forEach allPlayers;
_foundClimbingPlayer