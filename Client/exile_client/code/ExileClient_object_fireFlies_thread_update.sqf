/**
 * ExileClient_object_fireFlies_thread_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hour", "_startHour", "_endHour", "_position", "_i"];
if (diag_tickTime >= ExileNextFireFliesSpawnAt) then 
{
	_hour = date select 3;
	_startHour = getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "FireFlies" >> "startHour");
	_endHour = getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "FireFlies" >> "endHour");
	if (_hour >= _startHour || _hour <= _endHour) then 
	{
		if !(isNull player) then 
		{
			_position = [player, 5 + (random 10), random 360] call BIS_fnc_relPos; 
			for "_i" from 0 to (1 + floor (random 5)) do 
			{
				_position call ExileClient_object_fireFlies_dropParticle;
			};
		};
		ExileNextFireFliesSpawnAt = diag_tickTime + (20 + (random 20));
	}
	else 
	{
		ExileNextFireFliesSpawnAt = diag_tickTime + 60;
	};
};