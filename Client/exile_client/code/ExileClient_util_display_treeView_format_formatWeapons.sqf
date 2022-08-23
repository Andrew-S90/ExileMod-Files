/**
 * ExileClient_util_display_treeView_format_formatWeapons
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_weapon", "_displayName", "_picture", "_temp", "_weaponItemTemp", "_i", "_weaponItem"];
_weapon = (_this select 0);
_displayName = getText (configFile >> "CfgWeapons" >> _weapon >> "displayName");
_picture = getText (configFile >> "CfgWeapons" >> _weapon >> "picture");
_temp = [_displayName,_picture];
_weaponItemTemp = [];
for "_i" from 1 to ((count _this) - 1) do 
{
	_weaponItem = _this select _i;
	if((typeName _weaponItem) isEqualTo "STRING")then
	{
		if!(_weaponItem isEqualTo "")then
		{
			_displayName = getText (configFile >> "CfgWeapons" >> _weaponItem >> "displayName");
			_picture = getText (configFile >> "CfgWeapons" >> _weaponItem >> "picture");
			_weaponItemTemp pushBack [_displayName,_picture];
		};
	}
	else
	{
		if!(_weaponItem isEqualTo [])then
		{
			_displayName = getText (configFile >> "CfgMagazines" >> (_weaponItem select 0) >> "displayName");
			_displayName = format ["%1(%2)",_displayName,_weaponItem select 1];
			_picture = getText (configFile >> "CfgMagazines" >> _weaponItem select 0 >> "picture");
			_weaponItemTemp pushBack [_displayName,_picture];
		};
	};
};
_temp pushBack _weaponItemTemp;
_temp