/**
 * ExileClient_util_fuel_setFuel
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_amount", "_fuelCapacity", "_fuel"];
_object = _this select 0;
_amount = _this select 1;
if((typeOf _object)isEqualTo "Land_fs_feed_F")exitWith{true};
_fuelCapacity = getNumber(configFile >> "CfgVehicles" >> typeOf _object >> "fuelCapacity");
_fuel = fuel _object;
_fuel = _fuel + _amount/_fuelCapacity;
_object setFuel _fuel;
if(isServer)then
{
	if (_object getVariable ["ExileIsPersistent", false]) then
	{
		_object call ExileServer_system_vehicleSaveQueue_addVehicle;
	};
}
else
{
	["vehicleSaveRequest",[netId _object]] call ExileClient_system_network_send;
};
true