/**
 * ExileClient_action_hackLock_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_safe", "_result", "_maxHackAttempts", "_hackAttempts", "_concurrentHacks", "_hackerUID"];
_safe = _this;
_result = "";
try 
{
	if (ExilePlayerInSafezone) then
	{
		throw "You are in a safe zone!";
	};
	switch (locked _safe) do 
	{
		case 0:	{ throw "Safe is not locked!"; };
		case 1:	{ throw "Safe does not have a lock!"; };
	};
	if !("Exile_Item_Laptop" in (magazines player)) then
	{
		throw "You need a laptop!";
	};
	if ((_safe distance player) > 7) then 
	{
		throw "You are too far away!";
	};
	_maxHackAttempts = getNumber (missionConfigFile >> 'CfgHacking' >> 'maxHackAttempts'); 
	_hackAttempts = _safe getVariable ["ExileHackAttempts", -1];
	if (_hackAttempts > _maxHackAttempts) then
	{
		throw "Max hack attempts reached."
	};
	if (count(allPlayers) < (getNumber(missionConfigFile >> "CfgHacking" >> "minPlayers"))) then 
	{
		throw "There aren't enough players on the server to hack right now";
	};
	_concurrentHacks = {_x getVariable ["ExileIsHacking", false]} count allPlayers;
	if (_concurrentHacks >= (getNumber(missionConfigFile >> "CfgHacking" >> "maxHacks"))) then 
	{
		throw "Max hacks in progress";	
	};
	_hackerUID = _safe getVariable ["ExileHackerUID", ""];
	if (!(_hackerUID isEqualTo "") && {!(_hackerUID isEqualTo (getPlayerUID player))}) then
	{
		throw "This safe is already being hacked";
	};
	player setVariable ["ExileIsHacking", true, true];
	if (_hackerUID isEqualTo "") then 
	{
		["startHackRequest", [netId _this]] call ExileClient_system_network_send;
	};
}
catch 
{
	_result = _exception;
};
_result