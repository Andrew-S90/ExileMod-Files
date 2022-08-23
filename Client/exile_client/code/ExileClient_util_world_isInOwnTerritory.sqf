/**
 * ExileClient_util_world_isInOwnTerritory
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_is", "_territory"];
_object = _this;
_is = false;
_territory = _object call ExileClient_util_world_getTerritoryAtPosition;
if(!isNull _territory)then
{
	if((getPlayerUID player) in (_territory getVariable ["ExileTerritoryBuildRights",[]]))then
	{
		_is = true;
	};
};
_is