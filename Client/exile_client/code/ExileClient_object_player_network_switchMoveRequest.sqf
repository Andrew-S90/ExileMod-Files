/**
 * ExileClient_object_player_network_switchMoveRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerNetID", "_move", "_player"];
_playerNetID = _this select 0;
_move = _this select 1;
_player = objectFromNetId _playerNetID;
if !(isNull _player) then
{
	_player switchMove _move;
};
