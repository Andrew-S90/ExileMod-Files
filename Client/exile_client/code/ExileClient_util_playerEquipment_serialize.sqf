/**
 * ExileClient_util_playerEquipment_serialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_equipment"];
_player = _this;
_equipment = 
[
	(uniform _player),
	(vest _player),
	(backpack _player),
	(headgear _player),
	(binocular _player),
	(goggles _player),
	(assignedItems _player),
	(primaryWeapon _player),
	(primaryWeaponItems _player),
	(primaryWeaponMagazine _player), 
	(secondaryWeapon _player),
	(secondaryWeaponItems _player),
	(secondaryWeaponMagazine _player), 
	(handgunWeapon _player),
	(handgunItems _player),
	(handgunMagazine _player) 
];
_equipment