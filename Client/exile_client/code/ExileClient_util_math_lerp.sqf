/**
 * ExileClient_util_math_lerp
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_fromValue", "_toValue", "_step", "_result"];
_fromValue = _this select 0;
_toValue = _this select 1;
_step = _this select 2;
_result = _fromValue + _step * (_toValue - _fromValue);
_result