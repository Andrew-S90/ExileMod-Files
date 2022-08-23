/**
 * ExileClient_util_containerCargo_serialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container", "_data", "_magazines", "_weapons", "_subContainers", "_subContainerClassNames", "_itemsUnfiltered", "_items", "_itemClassName", "_itemQuantity", "_subContainerCargo"];
_container = _this;
_data = [];
if (isNull _container) exitWith {[[], [], [], []]};
_magazines = magazinesAmmoCargo _container;
if (isNil "_magazines") then
{
	_magazines = [];
};
_weapons = weaponsItemsCargo _container;
if (isNil "_weapons") then
{
	_weapons = [];
};
_subContainers = everyContainer _container;
_subContainerClassNames = [];
{
	_subContainerClassNames pushBack (_x select 0);
}
forEach _subContainers;
_itemsUnfiltered = getItemCargo _container;
_items = [];
if (isNil "_itemsUnfiltered") then
{
	_itemsUnfiltered = [];
};
{
	_itemClassName = (_itemsUnfiltered select 0) select _forEachIndex;
	_itemQuantity = (_itemsUnfiltered select 1) select _forEachIndex;
	if !(_itemClassName in _subContainerClassNames) then
	{
		_items pushBack [_itemClassName, _itemQuantity];
	};
}
forEach (_itemsUnfiltered select 0);
_subContainerCargo = [];
{
	_subContainerCargo pushBack [_x select 0, (_x select 1) call ExileClient_util_containerCargo_serialize];
} 
forEach _subContainers;
[_magazines, _weapons, _items, _subContainerCargo]