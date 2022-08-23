/**
 * ExileClient_object_player_event_onFiredSafeZoneVehicle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_projectile"];
_projectile = _this select 6;
if (local _projectile) then 
{
	deleteVehicle _projectile;
};
