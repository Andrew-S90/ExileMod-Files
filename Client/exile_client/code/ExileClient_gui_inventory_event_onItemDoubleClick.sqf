/**
 * ExileClient_gui_inventory_event_onItemDoubleClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_itemControl", "_itemControlIndex", "_itemClassName", "_itemDisplayName", "_configName", "_configSearch"];
_itemControl = _this select 0;
_itemControlIndex = _this select 1;
_itemClassName = _itemControl lbData _itemControlIndex;
_itemDisplayName = _itemControl lbText _itemControlIndex;
_configName = "";
if( _itemClassName == "" ) then
{
	_configSearch = _itemDisplayName call ExileClient_util_gear_getConfigEntryByDisplayName;
	_itemClassName = _configSearch select 0;
	_configName = _configSearch select 1;
}
else 
{
	_configName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
};
if( _configName != "" ) then
{
	[_configName, _itemClassName] call ExileClient_gui_itemDetails_show;
};
true