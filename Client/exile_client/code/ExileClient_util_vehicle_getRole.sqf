/**
 * ExileClient_util_vehicle_getRole
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_unit", "_crew", "_role"];
_unit = _this;
_crew = fullCrew (vehicle _unit);
_role = "";
if !(_crew isEqualTo []) then 
{
	{
		if ((_x select 0) isEqualTo _unit) exitWith
		{
			_role = toLower (_x select 1);
		};
	}
	forEach _crew;
};
_role