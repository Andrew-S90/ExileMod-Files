/**
 * ExileClient_util_world_getTerritoryAtPosition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_flag", "_maximumTerritoryRadius", "_territoryRadius"];
_position = _this;
_flag = objNull;
_maximumTerritoryRadius = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");
{
	_territoryRadius = _x getVariable ["ExileTerritorySize", -1];
	if ((_position distance _x) < _territoryRadius) exitWith
	{
		_flag = _x;
	};
}
forEach (_position nearObjects ["Exile_Construction_Flag_Static", _maximumTerritoryRadius]); 
_flag