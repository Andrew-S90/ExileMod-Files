/**
 * ExileClient_util_display_treeView_format_formatMagazines
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_magazineName", "_magazineCount", "_displayName", "_picture"];
_magazineName = _this select 0;
_magazineCount = _this select 1;
_displayName = getText (configFile >> "CfgMagazines" >> _magazineName >> "displayName");
_displayName = format ["%1(%2)",_displayName,_magazineCount];
_picture = getText (configFile >> "CfgMagazines" >> _magazineName >> "picture");
[_displayName,_picture]