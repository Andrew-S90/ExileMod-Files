/**
 * ExileClient_system_animal_thread
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animalConfig", "_possibleAnimalSpawns", "_animalTypesToCheck", "_spawnDistance", "_spawnRadius", "_centerPosition", "_animalBaseClassName", "_arithmetic", "_places", "_place", "_placePosition", "_placeRating", "_animalToSpawn", "_minimumLifetime", "_spawnedAt", "_keepAliveRadius"];
_animalConfig = missionConfigFile >> "CfgExileAnimals";
if (isNull ExileClientCurrentAnimal) then
{
	if (alive player) then
	{
		if (time >= ExileClientNextPossibleAnimalSpawnTime) then
		{
			if !((vehicle player) call ExileClient_util_world_isInTraderZone) then 
			{
				if !((vehicle player) call ExileClient_util_world_isInRadiatedZone) then 
				{
					_possibleAnimalSpawns = [];
					_animalTypesToCheck = getArray (_animalConfig >> "animalTypes");
					_spawnDistance = getNumber (_animalConfig >> "spawnDistance");
					_spawnRadius = getNumber (_animalConfig >> "spawnRadius");
					_centerPosition = player modelToWorld[0, _spawnDistance + _spawnRadius, 0];
					_centerPosition set [2, 0];
					{
						_animalBaseClassName = _x;
						_arithmetic = getText (configFile >> "CfgVehicles" >> _animalBaseClassName >> "Exile" >> "bestPlaces");
						_places = selectBestPlaces [_centerPosition, _spawnRadius, _arithmetic, 5, 1];
						if !(_places isEqualTo []) then
						{
							_place = _places select 0;
							_placePosition = _place select 0;
							_placeRating = _place select 1;
							if (_placeRating > 0.25) then 
							{
								_possibleAnimalSpawns pushBack [_animalBaseClassName, _placePosition];
							};
						};
					}
					forEach _animalTypesToCheck;
					if !(_possibleAnimalSpawns isEqualTo []) then 
					{
						_animalToSpawn = selectRandom _possibleAnimalSpawns;
						_animalToSpawn call ExileClient_object_animal_spawn;
					};
				};
			};
		};
	};
}
else
{
	_minimumLifetime = getNumber (_animalConfig >> "minimumLifetime");
	_spawnedAt = ExileClientCurrentAnimal getVariable ["SpawnedAt", 0];
	if ((time - _spawnedAt) >= _minimumLifetime) then
	{
		_keepAliveRadius = getNumber (_animalConfig >> "keepAliveRadius");
		if !([ExileClientCurrentAnimal, _keepAliveRadius] call ExileClient_util_world_isAlivePlayerInRange) then
		{
			deleteVehicle ExileClientCurrentAnimal;
			ExileClientCurrentAnimal = objNull;
			[] call ExileClient_system_animal_scheduleRespawn;
		};
	};
};