/**
 * ExileClient_util_player_objectFromPlayerUID
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerUID", "_playerObject", "_player"];
_playerUID = _this;
_playerObject = objNull;
{
	_player = _x;
	if(getPlayerUID _player isEqualTo _playerUID)exitWith
	{
		_playerObject = _x;
	};
} 
forEach allPlayers;
_playerObject