/**
 * ExileClient_util_display_treeView_format_formatFull
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_cargo", "_fillArray", "_temp"];
_cargo = _this;
_fillArray = [];
{
	switch (_forEachIndex) do 
	{
		case 0 :
		{
			if!(_x isEqualTo [])then
			{
				{
					_temp = _x call ExileClient_util_display_treeView_format_formatMagazines;
					_fillArray pushBack _temp;
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
					_fillArray pushBack _temp;
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
					_fillArray pushBack _temp;
				}
				forEach _x; 
			};
		};
		case 3 :
		{
			if!(_x isEqualTo [])then
			{
				{
					_temp = _x call ExileClient_util_display_treeView_format_formatContainer;
					_fillArray pushBack _temp;
				}
				forEach _x; 
			};
		};
	};
}
forEach _cargo;
_fillArray
