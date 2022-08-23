/**
 * ExileClient_object_fireFlies_dropParticle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_glow"];
_position = [_this, random 2, random 360] call BIS_fnc_relPos; 
_position set [2, 1 + (random 1)];       
_glow = 1.5 + (random 1.25);
drop
[
	["\exile_assets\model\Exile_Animal_FireFly",1,0,1],
	"",
	"Billboard",
	1,
	20,
	_position,
	[0, 0, 0],
	random 1,
	1.275,
	1.0,
	0.009,
	[0.3],
	[
		[1,1,1,0],
		[_glow,_glow,_glow,_glow],
		[_glow,_glow,_glow,_glow],
		[_glow,_glow,_glow,0]
	],
	[1],
	2.0,
	0.05,
	"",
	"",
	"",
	random 360,
	false,
	-1
];