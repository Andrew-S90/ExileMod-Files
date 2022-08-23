/**
 * ExileClient_system_map_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileSpawnZoneMarkerPositions = [];
ExileSpawnZoneMarkerPositionsAndSize = [];
ExileTraderZoneMarkerPositions = [];
ExileTraderZoneMarkerPositionsAndSize = [];
ExileNonConstructionZones = [];
ExileConcreteMixerZones = [];
ExileContaminatedZones = [];
{
	switch (getMarkerType _x) do 
	{
		case "ExileSpawnZone":
		{
			ExileSpawnZoneMarkerPositions pushBack (getMarkerPos _x);
			ExileSpawnZoneMarkerPositionsAndSize pushBack 
			[
				getMarkerPos _x, 
				(getMarkerSize _x) select 0
			];
		};
		case "ExileNonConstructionZone":
		{
			ExileNonConstructionZones pushBack 
			[
				getMarkerPos _x, 
				(getMarkerSize _x) select 0
			];
		};
		case "ExileTraderZone": 
		{
			ExileTraderZoneMarkerPositions pushBack (getMarkerPos _x);
			ExileTraderZoneMarkerPositionsAndSize pushBack 
			[
				getMarkerPos _x, 
				(getMarkerSize _x) select 0
			];
		};
		case "ExileContaminatedZone":
		{
			ExileContaminatedZones pushBack 
			[
				getMarkerPos _x,
				((getMarkerSize _x) select 0) * 0.75, 
				((getMarkerSize _x) select 0)
			];
		};
		case "ExileConcreteMixerZone":
		{
			ExileConcreteMixerZones pushBack 
			[
				getMarkerPos _x, 
				(getMarkerSize _x) select 0
			];
		};
	};
}
forEach allMapMarkers;