/**
 * ExileClient_system_animal_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animalConfig"];
_animalConfig = missionConfigFile >> "CfgExileAnimals";
if ((getNumber (_animalConfig >> "disableVanillaAnimals")) isEqualTo 1) then
{
	enableEnvironment [false, true];	
};
if ((getNumber (_animalConfig >> "enabled")) isEqualTo 1) then
{
	[] call ExileClient_system_animal_scheduleRespawn;
	[60, ExileClient_system_animal_thread, [], true] call ExileClient_system_thread_addtask;
};
