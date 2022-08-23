/**
 * ExileClient_gui_safezone_fireDisable
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !(ExileClientLastVehicle isEqualTo (vehicle player)) then
{
	call ExileClient_gui_safezone_reset;
	ExileClientLastVehicle = vehicle player;
	ExileSafeZoneFiredVehicleEH = ExileClientLastVehicle addEventHandler ["Fired",{_this call ExileClient_gui_safezone_fired}];
};