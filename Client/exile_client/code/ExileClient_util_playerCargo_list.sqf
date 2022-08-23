/**
 * ExileClient_util_playerCargo_list
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_list"];
_list = [];
_list append ([_this, true] call ExileClient_util_playerEquipment_list);
_list append ((uniformContainer _this) call ExileClient_util_containerCargo_list);
_list append ((vestContainer _this) call ExileClient_util_containerCargo_list);
_list append ((backpackContainer _this) call ExileClient_util_containerCargo_list);
_list