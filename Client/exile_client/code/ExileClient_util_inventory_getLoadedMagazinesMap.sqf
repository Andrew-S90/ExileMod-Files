/**
 * ExileClient_util_inventory_getLoadedMagazinesMap
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_loadedMagazines", "_magazine", "_bullets", "_isLoaded", "_type", "_muzzle"];
_player = _this;
_loadedMagazines = [];
{
	_magazine = _x select 0;
	_bullets = _x select 1;
	_isLoaded = _x select 2;
	_type = _x select 3;
	_muzzle = _x select 4;
	if (_isLoaded) then 
	{
		if (_bullets > 0) then 
		{
			switch (_type) do 
			{
				case 1: 
				{
					_loadedMagazines pushBack [primaryWeapon _player, _magazine, _bullets, _muzzle];
				};
				case 2: 
				{
					_loadedMagazines pushBack [handgunWeapon _player, _magazine, _bullets, _muzzle];
				};
				case 4: 
				{
					_loadedMagazines pushBack [secondaryWeapon _player, _magazine, _bullets, _muzzle];
				};
			};
		};
	};
} 
forEach (magazinesAmmoFull _player);
_loadedMagazines