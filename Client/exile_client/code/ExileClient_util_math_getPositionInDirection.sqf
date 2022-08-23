/**
 * ExileClient_util_math_getPositionInDirection
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_distance", "_direction", "_result"];
_position = _this select 0;
_distance = _this select 1;
_direction = _this select 2;
_result = 
[
	(_position select 0) + (_distance * sin _direction),
	(_position select 1) + (_distance * cos _direction),
	(_position select 2)
];
_result