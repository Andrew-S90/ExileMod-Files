/**
 * ExileClient_object_animal_spawn
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animalType", "_position", "_animalConfig", "_animalClass", "_animal"];
_animalType = _this select 0;
_position = _this select 1;
_animalConfig = configFile >> "CfgVehicles" >> _animalType >> "Exile";
_animalClass = selectRandom (getArray (_animalConfig >> "variations"));
_animal = createAgent [_animalClass, _position, [], 0, "FORM"];
_animal setVariable ["SpawnedAt", time];
_animal setVariable ["IsScared", false];
_animal setVariable ["LastDangerSoundAt", 0];
_animal setVariable ["NextIdleSoundAt", time + (random 10)];
_animal setVariable ["CanBeGutted", false];
_animal addEventHandler ["FiredNear", 	{ _this call ExileClient_object_animal_event_onFiredNear; 	}];
_animal addEventHandler ["Hit", 		{ _this call ExileClient_object_animal_event_onHit; 		}];
_animal addEventHandler ["Killed", 		{ _this call ExileClient_object_animal_event_onKilled; 		}];
["announceAnimalRequest", [netId _animal]] call ExileClient_system_network_send;
ExileClientCurrentAnimal = _animal;