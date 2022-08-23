/**
 * ExileClient_util_display_treeView_format_formatContainer
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_item", "_configName", "_displayName", "_picture", "_fillArray", "_tempCureent", "_temp"];
_item = _this select 0;
_configName = _item call ExileClient_util_gear_getConfigNameByClassName;
_displayName = getText (configFile >> _configName >> _item >> "displayName");
_picture = getText (configFile >> _configName >> _item >> "picture");
_fillArray = [_displayName,_picture];
_tempCureent = [];
{
	switch (_forEachIndex) do 
	{
		case 0 :
		{
			if!(_x isEqualTo [])then
			{
				{
					_temp = _x call ExileClient_util_display_treeView_format_formatMagazines;
					_tempCureent pushBack _temp;
				}
				forEach _x;
			};
		};
		case 1  : 
		{
			if!(_x isEqualTo [])then
			{	
				{
					_temp = _x call ExileClient_util_display_treeView_format_formatWeapons;
					_tempCureent pushBack _temp;
				}
				forEach _x;
			};
		};
		case 2 : 
		{
			if!(_x isEqualTo [])then
			{
				{
					_temp = _x call ExileClient_util_display_treeView_format_formatItems;
					_tempCureent pushBack _temp;
				}
				forEach _x; 
			};
		};
	};
}
forEach (_this select 1);
_fillArray pushBack _tempCureent;
_fillArray