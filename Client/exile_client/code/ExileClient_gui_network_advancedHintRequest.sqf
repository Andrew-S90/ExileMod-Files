/**
 * ExileClient_gui_network_advancedHintRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hintName"];
_hintName = _this select 0;
[["Exile", _hintName], 15, "", 35, "", true, false, true, true] call BIS_fnc_advHint;
true