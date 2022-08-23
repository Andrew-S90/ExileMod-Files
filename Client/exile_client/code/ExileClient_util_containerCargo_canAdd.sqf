/**
 * ExileClient_util_containerCargo_canAdd
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container", "_itemClassName", "_canAdd"];
_container = _this select 0;
_itemClassName  = _this select 1;
_canAdd = _container canAdd _itemClassName;
_canAdd