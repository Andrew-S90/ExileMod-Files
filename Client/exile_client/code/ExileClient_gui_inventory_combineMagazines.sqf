/**
 * ExileClient_gui_inventory_combineMagazines
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_equippedMagazines", "_repackedMagazines"];
_equippedMagazines = magazines player;
_repackedMagazines = [];
{
	if !(_x in _repackedMagazines) then
	{
		[player, _x, 0] call ExileClient_util_gear_repackMagazines;
		_repackedMagazines pushBack _x;
	};
}
forEach _equippedMagazines;
true