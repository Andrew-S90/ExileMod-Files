/**
 * ExileClient_util_math_lerpTriColor
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_colorStart", "_colorMiddle", "_colorEnd", "_step", "_resultColor"];
_colorStart = _this select 0;
_colorMiddle = _this select 1;
_colorEnd = _this select 2;
_step = _this select 3;
if (_step < 0.5) then
{
	_resultColor = [_colorStart, _colorMiddle, _step * 2] call ExileClient_util_math_lerpColor;	
}
else 
{
	_resultColor = [_colorMiddle, _colorEnd, (_step - 0.5) * 2] call ExileClient_util_math_lerpColor;	
};
_resultColor