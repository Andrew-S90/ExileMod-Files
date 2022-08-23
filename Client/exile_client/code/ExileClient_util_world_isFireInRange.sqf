/**
 * ExileClient_util_world_isFireInRange
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_range", "_isInRange"];
_position = _this select 0;
_range = _this select 1;
_isInRange = false;
{
	if (inflamed _x) exitWith
	{
		_isInRange = true;
	};
}
forEach (_position nearObjects _range);
_isInRange