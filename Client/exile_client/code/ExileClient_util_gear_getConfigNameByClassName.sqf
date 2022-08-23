/**
 * ExileClient_util_gear_getConfigNameByClassName
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_className", "_configName"];
_className = _this;
_configName = "";
switch (true) do
{
	case isClass(configFile >> "CfgMagazines" >> _className): 	{ _configName = "CfgMagazines"; };
	case isClass(configFile >> "CfgVehicles" >> _className): 	{ _configName = "CfgVehicles"; };
	case isClass(configFile >> "CfgAmmo" >> _className): 		{ _configName = "CfgAmmo"; };
	case isClass(configFile >> "CfgGlasses" >> _className): 	{ _configName = "CfgGlasses"; };
	default 											     	{ _configName = "CfgWeapons"; };
};
_configName