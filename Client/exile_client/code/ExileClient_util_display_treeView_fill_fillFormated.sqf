/**
 * ExileClient_util_display_treeView_fill_fillFormated
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_fillArray", "_subClass"];
_control = _this select 0;
_fillArray = _this select 1;
{
	_subClass = _x;
	[_control,_subClass,[]] call ExileClient_util_display_treeView_fill_handle;
}
forEach _fillArray;
true