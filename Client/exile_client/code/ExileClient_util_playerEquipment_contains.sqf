/**
 * ExileClient_util_playerEquipment_contains
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_itemClassName", "_equipment"];
_player = _this select 0;
_itemClassName = toLower (_this select 1);
_equipment = [_player, true] call ExileClient_util_playerEquipment_list;
_equipment = _equipment call ExileClient_util_array_toLower;
(_itemClassName in _equipment)