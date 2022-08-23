/**
 * ExileClient_system_territory_rebuildTerritoryLocations
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
{
	_x call ExileClient_system_territory_createLocationForTerritory;
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");