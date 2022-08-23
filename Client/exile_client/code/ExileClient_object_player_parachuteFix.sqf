/**
 * ExileClient_object_player_parachuteFix
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if(typeOf (vehicle player) isEqualTo "Steerable_Parachute_F")then
{
	if(
	count(lineIntersectsObjs [ATLToASL(player modelToWorld [0,0,0]), ATLToASL(player modelToWorld [0,0,-2])]) > 1
	||
	((getPosATL player) select 2) < 2
	)then
	{
		deleteVehicle (vehicle player);
		player switchMove "";
		player setVelocity [0, 0, 0];
		[ExileJobParachuteFix] call ExileClient_system_thread_removeTask;
	};
};