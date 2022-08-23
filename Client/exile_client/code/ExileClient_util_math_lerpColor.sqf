/**
 * ExileClient_util_math_lerpColor
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_fromRGBA", "_toRGBA", "_step", "_resultColor"];
_fromRGBA = _this select 0;
_toRGBA = _this select 1;
_step = _this select 2;
_resultColor =
[
	[_fromRGBA select 0, _toRGBA select 0, _step] call ExileClient_util_math_lerp,
	[_fromRGBA select 1, _toRGBA select 1, _step] call ExileClient_util_math_lerp,
	[_fromRGBA select 2, _toRGBA select 2, _step] call ExileClient_util_math_lerp,
	[_fromRGBA select 3, _toRGBA select 3, _step] call ExileClient_util_math_lerp
];
_resultColor