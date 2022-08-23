/**
 * ExileClient_system_animal_scheduleRespawn
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animalConfig", "_minimumSpawnDelay", "_maximumSpawnDelay", "_variance"];
_animalConfig = missionConfigFile >> "CfgExileAnimals";
_minimumSpawnDelay = getNumber (_animalConfig >> "minimumSpawnDelay");
_maximumSpawnDelay = getNumber (_animalConfig >> "maximumSpawnDelay"); 
_variance = random (_maximumSpawnDelay - _minimumSpawnDelay);
ExileClientNextPossibleAnimalSpawnTime = time + _minimumSpawnDelay + _variance;