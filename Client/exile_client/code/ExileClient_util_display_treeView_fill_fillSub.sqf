/**
 * ExileClient_util_display_treeView_fill_fillSub
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_index", "_data", "_test", "_newControl"];
_control = _this select 0;
_index = _this select 1;
_data = _this select 2;
if(_index isEqualTo [])then
{
	_test = _control tvAdd [_index,_data select 0];
	_control tvSetPicture [[_test],_data select 1];
}
else
{
	_test = _control tvAdd [_index,_data select 0];
	_newControl = _index + [_test];
	_control tvSetPicture [_newControl,_data select 1];
};
_test