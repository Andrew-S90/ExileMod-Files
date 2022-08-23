/**
 * ExileClient_util_item_getArmor
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_className", "_armor"];
_className = _this;
_armor = 0;
"_armor = _armor + getNumber (_x >> 'armor')" configClasses (configFile >> "CfgWeapons" >> _className >> "ItemInfo" >> "HitpointsProtectionInfo");
_armor