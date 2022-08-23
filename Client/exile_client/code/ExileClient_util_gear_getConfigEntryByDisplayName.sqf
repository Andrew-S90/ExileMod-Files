/**
 * ExileClient_util_gear_getConfigEntryByDisplayName
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_displayName", "_result", "_configSearch"];
_displayName = _this;
_result = ["", ""]; 
{
	_configSearch = ("getText (_x >> 'displayName') == _displayName") configClasses(configFile >> _x);
	if !(_configSearch isEqualTo[]) exitWith
	{
		_result = [configName(_configSearch select 0), _x];
	};
}
foreach ["CfgMagazines", "CfgWeapons", "CfgVehicles", "CfgAmmo"];
_result