/**
 * ExileClient_system_party_updateMyMarker
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_intersectingObjectArray", "_position"];
if ((getNumber (missionConfigFile >> "CfgExileParty" >> "allow3DMarkers")) isEqualTo 1) then 
{
	_intersectingObjectArray = lineIntersectsSurfaces [AGLToASL positionCameraToWorld [0, 0, 0], AGLToASL positionCameraToWorld [0, 0, 1600], vehicle player, objNull, true, 1, "VIEW", "FIRE"];
	if !(_intersectingObjectArray isEqualTo []) then 
	{
		_position = (_intersectingObjectArray select 0) select 0;
		["updateMyPartyMarkerRequest", [true, _position]] call ExileClient_system_network_send;
		player setVariable ["ExilePartyMarker", _position];
	}
	else 
	{
		["updateMyPartyMarkerRequest", [false, []]] call ExileClient_system_network_send;
		player setVariable ["ExilePartyMarker", -1];
	};
};