/**
 * ExileClient_util_playerCargo_canAdd
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_itemClassName", "_canAdd"];
_player = _this select 0;
_itemClassName = _this select 1;
_canAdd = false;
try
{
	if (_player canAddItemToUniform _itemClassName) then
	{
		throw true;
	};
	if (_player canAddItemToVest _itemClassName) then
	{
		throw true; 
	};
	if (_player canAddItemToBackpack _itemClassName) then
	{
		throw true;
	};
	if ([_player, _itemClassName] call ExileClient_util_playerEquipment_canAdd) then
	{
		throw true;
	};
}
catch 
{
	_canAdd = _exception;
};
_canAdd