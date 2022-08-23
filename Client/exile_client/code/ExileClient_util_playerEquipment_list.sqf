/**
 * ExileClient_util_playerEquipment_list
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_includeContainerItems", "_equipment", "_slotsToCheck"];
_player = _this select 0;
_includeContainerItems = _this select 1;
_equipment = [];
_slotsToCheck = [];
if (_includeContainerItems) then
{
	_slotsToCheck pushBack [(uniform _player), (vest _player), (backpack _player)];
};
_slotsToCheck pushBack [(primaryWeapon _player)];
_slotsToCheck pushBack (primaryWeaponMagazine _player);
_slotsToCheck pushBack (primaryWeaponItems _player);
_slotsToCheck pushBack [(secondaryWeapon _player)];
_slotsToCheck pushBack (secondaryWeaponMagazine _player);
_slotsToCheck pushBack (secondaryWeaponItems _player);
_slotsToCheck pushBack [(handgunWeapon _player)];
_slotsToCheck pushBack (handgunMagazine _player);
_slotsToCheck pushBack (handgunItems _player);
_slotsToCheck pushBack [(goggles _player), (headgear _player)];
_slotsToCheck pushBack (assignedItems _player);
{
	{
		if !(_x isEqualTo "") then
		{
			_equipment pushBack _x;
		};
	}
	forEach _x;
}
forEach _slotsToCheck;
_equipment