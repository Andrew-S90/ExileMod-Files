/**
 * ExileClient_util_display_treeView_fill_handle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_fill", "_index", "_newIndex"];
_control = _this select 0;
_fill = _this select 1;
_index = _this select 2;
if((count _fill) isEqualTo 2)then
{
	[_control,_index,_fill] call ExileClient_util_display_treeView_fill_fillSub;
}
else
{
	_newIndex = [_control,_index,[_fill select 0, _fill select 1]] call ExileClient_util_display_treeView_fill_fillSub;
	_index pushBack _newIndex;
	{
		[_control ,_x,_index] call ExileClient_util_display_treeView_fill_handle;
	}
	forEach (_fill select 2);
};
true