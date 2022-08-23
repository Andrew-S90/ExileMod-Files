/**
 * ExileClient_util_display_treeView_format_format
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_cargo", "_fillArray"];
_control = _this select 0;
_cargo = _this select 1;
_fillArray = _cargo call ExileClient_util_display_treeView_format_formatFull;
[_control,_fillArray] call ExileClient_util_display_treeView_fill_fillFormated;
true