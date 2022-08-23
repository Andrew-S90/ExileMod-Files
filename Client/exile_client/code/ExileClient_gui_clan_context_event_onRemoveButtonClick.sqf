/**
 * ExileClient_gui_clan_context_event_onRemoveButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_markerInfo", "_marker"];
_markerInfo = [ExileClientMapPositionClick,50] call ExileClient_util_clan_getMarkerAtPosition;
if(!(_markerInfo isEqualTo ["",-1]))then
{
	switch (_markerInfo select 0) do 
	{ 
		case "Marker" :
		{
			_marker = (ExileClientClanInfo select 3) select (_markerInfo select 1);
			["removeMarkerRequest", [3,_marker select ((count _marker) -1)]] call ExileClient_system_network_send;
		}; 
		case "Polygon" : 
		{
			_marker = (ExileClientClanInfo select 4) select (_markerInfo select 1);
			["removeMarkerRequest", [4,_marker select ((count _marker) -1)]] call ExileClient_system_network_send;
		}; 
		default {}; 
	};
};