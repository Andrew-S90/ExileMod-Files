/**
 * ExileClient_util_display_treeView_format_formatItems
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_displayName", "_picture"];
_displayName = getText (configFile >> "CfgWeapons" >> (_this select 0) >> "displayName");
_displayName = format ["%1(%2)",_displayName,_this select 1];
_picture = getText (configFile >> "CfgWeapons" >> (_this select 0) >> "picture");
[_displayName,_picture]