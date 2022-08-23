/**
 * ExileClient_util_playerCargo_deserialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_cargo"];
_player = _this select 0;
_cargo = _this select 1;
[_player, _cargo select 0] call ExileClient_util_playerEquipment_deserialize;
[(uniformContainer _player), _cargo select 1] call ExileClient_util_containerCargo_deserialize;
[(vestContainer _player), _cargo select 2] call ExileClient_util_containerCargo_deserialize;
[(backpackContainer _player), _cargo select 3] call ExileClient_util_containerCargo_deserialize;