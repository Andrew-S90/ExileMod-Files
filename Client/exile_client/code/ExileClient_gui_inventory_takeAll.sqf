/**
 * ExileClient_gui_inventory_takeAll
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playersNearby"];
try 
{
	if ((diag_tickTime - ExileClientLastTakeAllAt) < 5) then 
	{
		throw "Please wait five seconds.";
	};
	_playersNearby = [player, 15] call ExileClient_util_world_getAlivePlayerInfantryInRange;
	{
		if !(_x isEqualTo player) then
		{
			throw "Another player is nearby.";
		};
	}
	forEach _playersNearby;
	if !(isNull ExileClientCurrentInventoryContainer) then
	{
		["beginTakeAllRequest", [netId ExileClientCurrentInventoryContainer]] call ExileClient_system_network_send;
		ExileClientLastTakeAllAt = diag_tickTime;
	};
}
catch
{
	["ErrorTitleAndText", ["Take-all aborted!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true