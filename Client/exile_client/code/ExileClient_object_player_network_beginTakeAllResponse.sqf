/**
 * ExileClient_object_player_network_beginTakeAllResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_containerNetID", "_container"];
_containerNetID = _this select 0;
_container = objectFromNetId _containerNetID;
if !(isNull _container) then
{
	[_container, player] call ExileClient_util_playerCargo_takeAll;
	if (ExileClientPlayerIsBambi) then
	{
		if ((count (weapons player)) > 0) then
		{
			call ExileClient_object_player_bambiStateEnd;
		};
	};
};
["endTakeAllRequest", [_containerNetID]] call ExileClient_system_network_send;
