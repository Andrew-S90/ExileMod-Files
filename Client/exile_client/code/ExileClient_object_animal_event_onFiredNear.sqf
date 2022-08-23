/**
 * ExileClient_object_animal_event_onFiredNear
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animal", "_attacker"];
_animal = _this select 0;
_attacker = _this select 1;
_animal setVariable ["IsScared", true];
_animal setVariable ["ScaredAt", time];
_animal setVariable ["Aggressor", _attacker];
