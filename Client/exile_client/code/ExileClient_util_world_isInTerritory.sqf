/**
 * ExileClient_util_world_isInTerritory
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_result", "_maxRange", "_flags", "_distance", "_radius"];
_position = _this;
_result = false;
_maxRange = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");
_flags = _position nearObjects ["Exile_Construction_Flag_Static", _maxRange];
{
	_distance = _x distance _position;
	_radius = _x getVariable ["ExileTerritorySize", 0];
	if (_distance <= _radius) exitWith 
	{
		_result = true;
	};
}	
forEach _flags;
_result