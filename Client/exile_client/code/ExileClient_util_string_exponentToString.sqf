/**
 * ExileClient_util_string_exponentToString
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_string"];
_string = "";
while {_this >= 10} do 
{
	_this = _this / 10;
	_string = format ["%1%2", round ((_this % floor _this) * 10), _string];
	_this = floor _this;
};
format ["%1%2", _this, _string];