/**
 * ExileClient_util_string_containsForbiddenCharacter
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_string", "_allowedCharacters", "_stringLength", "_forbiddenCharacter", "_i", "_character"];
_string = _this select 0;
_allowedCharacters = _this select 1;
_stringLength = count _string;
_forbiddenCharacter = -1;
for "_i" from 0 to (_stringLength - 1) do
{
	_character = _string select [_i, 1];
	if ((_allowedCharacters find _character) isEqualTo -1) exitWith
	{
		_forbiddenCharacter = _character;
	};
};
_forbiddenCharacter