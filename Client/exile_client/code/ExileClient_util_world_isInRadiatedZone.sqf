/**
 * ExileClient_util_world_isInRadiatedZone
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_result", "_distance"];
_position = _this;
_result = false;
{
	_distance = (_x select 0) distance _position;
	if (_distance < (_x select 2)) exitWith
	{
		_result = true;
	};
}
forEach ExileContaminatedZones;
_result