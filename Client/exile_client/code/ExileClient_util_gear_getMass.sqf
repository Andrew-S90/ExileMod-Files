/**
 * ExileClient_util_gear_getMass
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_itemClassName", "_itemConfigName", "_mass"];
_itemClassName = _this;
_itemConfigName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
_mass = getNumber(configFile >> _itemConfigName >> _itemClassName >> "mass");
_mass