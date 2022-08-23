/**
 * ExileClient_util_world_getAllAirportPositions
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_positions"];
_positions = [];
if (isArray (configFile >> "CfgWorlds" >> worldName >> "ilsPosition")) then 
{
	_positions pushBack (getArray (configFile >> "CfgWorlds" >> worldName >> "ilsPosition"));
};
{
	_positions pushBack (getArray (_x >> "ilsPosition"));
}
forEach ("true" configClasses (configFile >> "CfgWorlds" >> worldName >> "SecondaryAirports"));
_positions