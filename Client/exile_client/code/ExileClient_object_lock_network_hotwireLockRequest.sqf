/**
 * ExileClient_object_lock_network_hotwireLockRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleObject"];
_vehicleObject = objectFromNetId (_this select 0);
if (local _vehicleObject) then
{
	_vehicleObject lock 0;
};
