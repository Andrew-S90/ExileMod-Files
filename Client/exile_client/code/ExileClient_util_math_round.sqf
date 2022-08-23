/**
 * ExileClient_util_math_round
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_number", "_decimalPlaces"];
_number = _this select 0;
_decimalPlaces = _this select 1;
round (_number * (10 ^ _decimalPlaces)) / (10 ^ _decimalPlaces)