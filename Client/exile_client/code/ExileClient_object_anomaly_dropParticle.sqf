/**
 * ExileClient_object_anomaly_dropParticle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position"];
_position = [player, 20 + (random 20), (getDir player) - 60 + (random 120)] call BIS_fnc_relPos;
_position set [2, (_position select 2) + (random 5)];
drop 
[
	["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1],
	"",
	"Billboard",
	1, 
	5, 
	_position, 
	[0, 0, 0], 
	random 50, 
	1.3, 
	1, 
	0, 
	[1 + (random 5)], 
	[ 
		[1,1,1,0], 
		[1,1,1,1], 
		[1,1,1,1], 
		[1,1,1,1], 
		[1,1,1,1],
		[1,1,1,0]
	], 
	[1], 
	0.5, 
	0.3, 
	"", 
	"", 
	"", 
	random 360,
	false, 
	-1 
];