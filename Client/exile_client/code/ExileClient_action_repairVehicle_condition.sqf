/**
 * ExileClient_action_repairVehicle_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle", "_result", "_availableHitpoints", "_canBeReparied"];
_vehicle = _this;
_result = "";
try 
{
	if (ExileClientPlayerIsInCombat) then
	{
		throw "You are in combat!";
	};
	if ((vehicle player) isEqualTo _vehicle) then 
	{
		throw "Are you serious?";
	};
	if (isEngineOn _vehicle) then 
	{
		throw "Turn off the engine first!";
	};
	if ((locked _vehicle) isEqualTo 2) then 
	{
		throw "Unlock the vehicle first!";
	};
	_availableHitpoints = (getAllHitPointsDamage _vehicle) select 0;
	_canBeReparied = false;
	{
		if ((_vehicle getHitPointDamage _x) > 0) exitWith
		{
			_canBeReparied = true;
		};
	}
	forEach _availableHitpoints;
	if !(_canBeReparied) then 
	{
		throw "This vehicle looks fine.";
	}; 
	if !(local _vehicle) then
	{
		throw "Please get in as driver/pilot first.";
	};
	if !("Exile_Item_DuctTape" in (magazines player)) then
	{
		throw "You need duct tape to do that!";
	};
	if ((_vehicle distance player) > 7) then 
	{
		throw "You are too far away!";
	};
}
catch 
{
	_result = _exception;
};
_result