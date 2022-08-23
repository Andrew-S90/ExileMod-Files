/**
 * ExileClient_object_vehicle_network_lockVehicleRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleID", "_mode", "_vehicleObject"];
_vehicleID = _this select 0;
_mode = _this select 1;
_vehicleObject = objectFromNetId _vehicleID;
if(local _vehicleObject)then
{
	if(_mode)then
	{
		_vehicleObject lock 2;
	}
	else
	{
		_vehicleObject lock 0;
	};
}
else
{
	"Arma is special!" call ExileClient_util_log;
};
true