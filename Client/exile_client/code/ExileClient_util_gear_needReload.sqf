/**
 * ExileClient_util_gear_needReload
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_currentMagazineClassName", "_currentAmmoCount", "_magazineCapacity", "_factor"];
_currentMagazineClassName = _this select 0;
_currentAmmoCount = _this select 1;
_magazineCapacity = getNumber (configFile >> "CfgMagazines" >> _currentMagazineClassName >> "count");
_factor = 0;
if (_magazineCapacity > 0) then 
{
	_factor = 1 - _currentAmmoCount / _magazineCapacity;
};
_factor