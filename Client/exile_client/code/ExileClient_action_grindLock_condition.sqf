/**
 * ExileClient_action_grindLock_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_door", "_result", "_grinderUID"];
_door = _this;
_result = "";
try 
{
	switch (locked _door) do 
	{
		case 0:	{ throw "The door is not locked!"; };
		case 1:	{ throw "The door does not have a lock!"; };
	};
	if ((_door animationPhase 'DoorRotation') > 0.5) then 
	{
		throw "Please close the door first.";
	};
	if !("Exile_Item_Grinder" in (magazines player)) then
	{
		throw "You need a grinder!";
	};
	if !("Exile_Magazine_Battery" in (magazines player)) then
	{
		throw "You need a battery!";
	};
	if ((_door distance player) > 7) then 
	{
		throw "You are too far away!";
	};
	_grinderUID = _door getVariable ["ExileGrinderUID", ""];
	if (!(_grinderUID isEqualTo "") && {!(_grinderUID isEqualTo (getPlayerUID player))}) then
	{
		throw "Another grind is in progress.";
	};
	_door setVariable ["ExileGrindStartTime", diag_tickTime];
	if (_grinderUID isEqualTo "") then 
	{
		["grindNotificationRequest", [netId _this]] call ExileClient_system_network_send;
	};
}
catch 
{
	_result = _exception;
};
_result