/**
 * ExileClient_system_territory_createLocationForTerritory
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flagObject", "_existingLocation", "_territoryName", "_territoryPosition", "_territoryRadius", "_location"];
_flagObject = _this;
_existingLocation = _flagObject getVariable ["ExileLocation", ""];
if !(_existingLocation isEqualTo "") then
{
	deleteLocation _existingLocation;
};
_territoryName = _flagObject getVariable ["ExileTerritoryName", ""];
_territoryPosition = getPosATL _flagObject;
_territoryRadius = _flagObject getVariable ["ExileTerritorySize", 0];
_location = createLocation ["ExileTerritory", _territoryPosition, _territoryRadius, _territoryRadius];
_location setRectangular false;
_location setName _territoryName;
_flagObject setVariable ["ExileLocation", _location];