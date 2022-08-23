/**
 * ExileClient_util_cargo_getMap
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_array"];
private "_array";
_array = [];
if (count _this > 1) then
{
	{
		_array pushBack [_x, (_this select 1) select _forEachIndex];
	} 
	forEach (_this select 0);
};
_array