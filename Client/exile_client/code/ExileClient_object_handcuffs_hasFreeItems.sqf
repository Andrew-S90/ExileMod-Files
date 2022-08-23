/**
 * ExileClient_object_handcuffs_hasFreeItems
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hasItem", "_inventory"];
_hasItem = false;
_inventory = magazines _this;
{
	if (_x in _inventory) exitWith
	{
		_hasItem = true;
	};
}
forEach ["Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_CanOpener"];
_hasItem