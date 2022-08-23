/**
 * ExileClient_gui_map_event_onDraw
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_marker", "_partyUnits", "_clanMembers", "_control"];
{
	deleteMarkerLocal _x;
}
forEach ExileClientPartyMapMarkers;
ExileClientPartyMapMarkers = [];
if (ExileClientPartyID isEqualTo -1) then
{
	_marker = createMarkerLocal ["ExilePartyMarker0", getPosVisual player];
	_marker setMarkerShapeLocal "ICON";
	_marker setMarkerTypeLocal "ExilePlayer";
	_marker setMarkerDirLocal (getDirVisual player);
	_marker setMarkerAlphaLocal 0.75;
	_marker setMarkerColorLocal "ColorBlue";
	ExileClientPartyMapMarkers pushBack _marker;
}
else
{
	_partyUnits = units (group player);
	{
		if (isPlayer _x) then 
		{
			_marker = createMarkerLocal [format ["ExilePartyMarker%1", _forEachIndex], getPosVisual _x];
			_marker setMarkerShapeLocal "ICON";
			_marker setMarkerTypeLocal "ExilePlayer";
			_marker setMarkerDirLocal (getDirVisual _x);
			_marker setMarkerAlphaLocal 0.75;
			if (_x isEqualTo player) then 
			{
				_marker setMarkerColorLocal "ColorBlue";
			}
			else 
			{
				_marker setMarkerColorLocal "ColorGreen";
				_marker setMarkerTextLocal (name _x);
			};
			ExileClientPartyMapMarkers pushBack _marker;
		};
	}
	forEach _partyUnits;
};
if!(ExileClientClanInfo isEqualTo [])then
{
	_clanMembers = ExileClientClanInfo call ExileClient_util_clan_getClanMembers;
	{
		if!(_x in _partyUnits)then
		{
			_marker = createMarkerLocal [format ["ExileClanMarker%1", _forEachIndex], getPosVisual _x];
			_marker setMarkerShapeLocal "ICON";
			_marker setMarkerTypeLocal "ExilePlayer";
			_marker setMarkerDirLocal (getDirVisual _x);
			_marker setMarkerAlphaLocal 0.75;
			_marker setMarkerColorLocal "ColorRed";
			_marker setMarkerTextLocal (name _x);
			ExileClientPartyMapMarkers pushBack _marker
		};
	}
	forEach _clanMembers;
};
if!(ExileClientWaypoints isEqualTo [])then
{
	_control = _this select 0;
	{
		_control drawIcon 
		[
			"\a3\ui_f\data\Map\MapControl\custommark_CA.paa",
			[1, 1, 1, 1],
			ExileClientWaypoints select _forEachIndex,
			16,
			16,
			0,
			"",
			0,
			0,
			"PuristaMedium"
		];
	}
	forEach ExileClientWaypoints;
};