/**
 * ExileClient_util_array_toLower
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_input", "_output"];
_input = _this;
_output = [];
{
	_output pushBack (toLower _x);
}
forEach _input;
_output