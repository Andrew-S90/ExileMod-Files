/**
 * ExileClient_util_world_findCoastPosition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_mapCenter", "_results", "_position"];
_mapCenter = getArray (configFile >> "CfgWorlds" >> worldName >> "centerPosition");
_results = selectBestPlaces [_mapCenter, worldSize * 2, "sea - waterDepth + (waterDepth factor [0.05, 0.5])", 100, 1];
_position = [];
if !(_results isEqualTo []) then 
{
	_position = (_results select 0) select 0;
	_position pushBack 0; 
};
_position