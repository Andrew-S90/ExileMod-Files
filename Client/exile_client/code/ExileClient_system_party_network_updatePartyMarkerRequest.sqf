/**
 * ExileClient_system_party_network_updatePartyMarkerRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerNetID", "_update", "_position", "_player"];
_playerNetID = _this select 0;
_update = _this select 1; 
_position = _this select 2;
_player = objectFromNetId _playerNetID;
if !(isNull _player) then 
{
	if (_update) then 
	{
		_player setVariable ["ExilePartyMarker", _position];
	}
	else 
	{
		_player setVariable ["ExilePartyMarker", -1];
	};
};