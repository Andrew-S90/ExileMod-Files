/**
 * ExileClient_util_cargo_getType
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_itemClassName", "_cargoType", "_itemType"];
_itemClassName = _this;
_cargoType = 4;
_itemType = [_itemClassName] call BIS_fnc_itemType;
switcH( _itemType select 0) do 
{
	case "Weapon": 		{ _cargoType = 2; };
	case "Mine": 		{ _cargoType = 1; };
	case "Magazine": 	{ _cargoType = 1; };
	case "Item":		{ _cargoType = 4; };
	case "Equipment": 
	{ 
		if ((_itemType select 1) == "Backpack" ) then
		{
			_cargoType = 3; 
		}
		else 
		{
			_cargoType = 4; 
		};
	};
};
_cargoType