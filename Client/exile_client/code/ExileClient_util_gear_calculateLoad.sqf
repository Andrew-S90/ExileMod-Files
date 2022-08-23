/**
 * ExileClient_util_gear_calculateLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_items", "_load"];
_items = _this;
_load = 0;
{
	_load = _load + (_x call ExileClient_util_gear_getMass);
}
forEach _items;
_load