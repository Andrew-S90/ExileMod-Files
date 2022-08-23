/**
 * ExileClient_util_inventory_contains
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_itemClassName", "_containsItem", "_itemsCarried"];
_itemClassName = _this;
_containsItem = false;
_itemsCarried = call ExileClient_util_inventory_getItemsCarried;
if (_itemsCarried find _itemClassName > -1) then
{
	_containsItem = true;
};
_containsItem