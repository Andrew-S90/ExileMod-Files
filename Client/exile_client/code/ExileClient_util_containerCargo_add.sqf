/**
 * ExileClient_util_containerCargo_add
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container", "_itemClassName", "_bulletCount", "_itemInformation", "_itemCategory", "_itemType", "_added"];
_container = _this select 0;
_itemClassName = _this select 1;
_bulletCount = [_this, 2, -1] call BIS_fnc_param; 
_itemInformation = [_itemClassName] call BIS_fnc_itemType;
_itemCategory = _itemInformation select 0;
_itemType = _itemInformation select 1;
_added = false;
switch (_itemCategory) do 
{
	case "Weapon":
	{
		_container addWeaponCargoGlobal [_itemClassName, 1];
		_added = true;
	};
	case "Mine",
	case "Magazine":
	{
		if (_bulletCount isEqualTo -1) then
		{
			_container addMagazineCargoGlobal [_itemClassName, 1];
			_added = true;
		}
		else 
		{
			_container addMagazineAmmoCargo [_itemClassName, 1, _bulletCount];
			_added = true;
		};
	};
	default
	{
		if (_itemType isEqualTo "Backpack") then
		{
			_container addBackpackCargoGlobal [_itemClassName, 1];
			_added = true;
		}
		else 
		{
			_container addItemCargoGlobal [_itemClassName, 1];
			_added = true;
		};
	};
};
_added