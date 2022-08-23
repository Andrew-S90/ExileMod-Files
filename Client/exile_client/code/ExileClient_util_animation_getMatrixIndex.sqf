/**
 * ExileClient_util_animation_getMatrixIndex
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_currentWeapon", "_stanceIndex", "_weaponIndex", "_map"];
_currentWeapon = currentWeapon player;
_stanceIndex = 0;
_weaponIndex = 0;
_map = 
[
	[
		0,
		1,
		2,
		3,
		4
	],
	[
		5,
		6,
		7,
		8,
		9
	],
	[
		10,
		11,
		12,
		13,
		14
	]
];
switch (stance player) do
{
	case "CROUCH": 	{ _stanceIndex = 1; };
	case "PRONE": 	{ _stanceIndex = 2; };
	default 		{ _stanceIndex = 0; };
};
switch (true) do 
{
	case (_currentWeapon isEqualTo ""):																		{ _weaponIndex = 0; };
	case ((_currentWeapon isEqualTo (primaryWeapon player)) && !((primaryWeapon player) isEqualTo "")):		{ _weaponIndex = 1; };
	case ((_currentWeapon isEqualTo (handgunWeapon player)) && !((handgunWeapon player) isEqualTo "")):		{ _weaponIndex = 2; };
	case ((_currentWeapon isEqualTo (binocular player)) && !((binocular player) isEqualTo "")):				{ _weaponIndex = 4; };
	default  																								{ _weaponIndex = 3; };		
};
(_map select _stanceIndex) select _weaponIndex