/**
 * ExileClient_util_clan_getMarkerAtPosition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_radius", "_type", "_index"];
_position = _this select 0;
_radius = _this select 1;
_type = "";
_index = -1;
try
{
	{
		if(((_x select 2) distance2D _position) < _radius)then
		{
			throw ["Marker",_forEachIndex];
		};
	}
	forEach (ExileClientClanInfo select 3);
	if(count _position < 3)then 
	{
		_position pushback 0;
	};
	{
		if(_position inPolygon (_x select 0))then
		{
			throw ["Polygon",_forEachIndex];
		};
	}
	forEach (ExileClientClanInfo select 4);
}
catch
{
	_type = _exception select 0;
	_index = _exception select 1;
};
[_type,_index]