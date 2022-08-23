/**
 * ExileClient_util_playerCargo_serialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_cargo"];
_cargo = [];
_cargo pushBack (_this call ExileClient_util_playerEquipment_serialize);
_cargo pushBack ((uniformContainer _this) call ExileClient_util_containerCargo_serialize);
_cargo pushBack ((vestContainer _this) call ExileClient_util_containerCargo_serialize);
_cargo pushBack ((backpackContainer _this) call ExileClient_util_containerCargo_serialize);
_cargo