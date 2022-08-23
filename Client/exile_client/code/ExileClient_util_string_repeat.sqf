/**
 * ExileClient_util_string_repeat
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_numberOfTimes", "_string", "_repeated", "_i"];
_numberOfTimes = _this select 0;
_string = _this select 1;
_repeated = "";
for "_i" from 1 to _numberOfTimes do 
{
	_repeated = _repeated + _string;
};
_repeated