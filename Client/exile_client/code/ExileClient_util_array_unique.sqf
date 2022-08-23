/**
 * ExileClient_util_array_unique
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_in", "_out"];
_in = _this;
_out = [];
{_out pushBackUnique _x} forEach _in;
_out