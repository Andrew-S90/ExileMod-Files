/**
 * ExileClient_util_string_scalarToString
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_arr"];
if (_this isEqualTo 0) exitWith {"0"};
_arr = toArray str abs (_this % 1);
_arr set [0, 32];
toString (toArray str (
	abs (_this - _this % 1) * _this / abs _this
) + _arr - [32])