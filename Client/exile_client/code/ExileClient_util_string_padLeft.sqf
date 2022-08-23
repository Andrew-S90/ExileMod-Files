/**
 * ExileClient_util_string_padLeft
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_string", "_targetLength", "_padding", "_result"];
_string = _this select 0;
_targetLength = _this select 1;
_padding = _this select 2;
_result = _string;
while {(count _result) < _targetLength} do 
{
	_result = _padding + _result;
};
_result