/**
 * ExileClient_object_vehicle_network_rotateVehicleRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleID", "_vehicle"];
_vehicleID = _this select 0;
_vehicle = objectFromNetId _vehicleID;
if (local _vehicle) then
{
	_this call ExileClient_object_vehicle_rotate;
}
else
{
	"ROTATE: Local object is not local DEFUCK!" call ExileClient_util_log;
};
true