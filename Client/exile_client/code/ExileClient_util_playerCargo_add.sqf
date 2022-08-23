/**
 * ExileClient_util_playerCargo_add
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_itemClassName", "_bulletCount", "_added"];
_player = _this select 0;
_itemClassName = _this select 1;
_bulletCount = [_this, 2, -1] call BIS_fnc_param; 
_added = false;
try
{
	if ([_player, _itemClassName] call ExileClient_util_playerEquipment_canAdd) then 
	{
		throw ([_player, _itemClassName, _bulletCount] call ExileClient_util_playerEquipment_add); 
	};
	if (_player canAddItemToUniform _itemClassName) then 
	{
		throw ([(uniformContainer _player), _itemClassName, _bulletCount] call ExileClient_util_containerCargo_add); 
	};
	if (_player canAddItemToVest _itemClassName) then 
	{
		throw ([(vestContainer _player), _itemClassName, _bulletCount] call ExileClient_util_containerCargo_add); 
	};
	if (_player canAddItemToBackpack _itemClassName) then 
	{
		throw ([(backpackContainer _player), _itemClassName, _bulletCount] call ExileClient_util_containerCargo_add); 
	};
}
catch 
{
	_added = _exception;
};
_added