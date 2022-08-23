/**
 * ExileClient_util_containerCargo_deserialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container", "_data", "_subContainerItemClassName", "_subContainerCargo", "_subContainerContainer"];
_container = _this select 0;
_data = _this select 1;
_container call ExileClient_util_containerCargo_clear;
{
	_container addMagazineAmmoCargo [_x select 0, 1, _x select 1];
}
forEach (_data select 0);
{
	{
		if (_forEachIndex isEqualTo 0) then
		{
			if !(_x isEqualTo "") then
			{
				_container addWeaponCargoGlobal [_x, 1];
			};
		}
		else 
		{
			if ((typeName _x) isEqualTo "ARRAY") then
			{
				if !(_x isEqualTo []) then 
				{
					_container addMagazineAmmoCargo [_x select 0, 1, _x select 1];
				};
			}
			else 
			{
				if !(_x isEqualTo "") then
				{
					_container addItemCargoGlobal [_x, 1];
				};
			};
		};
	}
	forEach _x;
}
forEach (_data select 1);
{
	_container addItemCargoGlobal [_x select 0, _x select 1];
}
forEach (_data select 2);
{
	_subContainerItemClassName = _x select 0;
	_subContainerCargo = _x select 1;
	[_container, _subContainerItemClassName] call ExileClient_util_containerCargo_add;
	_subContainerContainer = ((everyContainer _container) select ((count (everyContainer _container)) - 1)) select 1;
	[_subContainerContainer, _subContainerCargo] call ExileClient_util_containerCargo_deserialize;
}
forEach (_data select 3);