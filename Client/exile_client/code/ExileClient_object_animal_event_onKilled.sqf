/**
 * ExileClient_object_animal_event_onKilled
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animal", "_animalConfig", "_deathSound"];
_animal = _this select 0;
_animalConfig = configFile >> "CfgVehicles" >> typeOf _animal >> "Exile";
_deathSound = selectRandom (getArray (_animalConfig >> "deathSounds"));
playSound3D [_deathSound select 0, _animal, false, getPosASL _animal, _deathSound select 2, 1, _deathSound select 1];
ExileClientCurrentAnimal = objNull;
[] call ExileClient_system_animal_scheduleRespawn;