/**
 * ExileClient_object_flies_event_onInit
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_particleEmitter"];
if !(hasInterface) exitWith {};
_particleEmitter = "#particlesource" createVehicleLocal (getPos _this);
_particleEmitter setParticleParams 
[
				["\A3\animals_f\fly.p3d", 1, 0, 1, 0], "", 
 				"spaceObject",
 			1,
 			4,
			[0, 0, 0],
		[0, 0, 0.5],
			0, 1.30, 1, 0, 
				[1.2, 1.2, 1.2, 0],
				[[1, 1, 1, 1],[1, 1, 1, 1]],
			[1.5,0.5],
		0.01,
		0.08,
 		"",
 		"",
 				""
];
_particleEmitter setParticleRandom 
[
	 		2,
			[1.5, 1.5, 0.5],
		[0, 0, 0],
	 	1, 
				0.2, 
				[0, 0, 0, 0.1],
		0.01,
		0.03,
	 			10
];
_particleEmitter setDropInterval 0.1;
_particleEmitter attachTo [_this, [0, 0, 0]];
_this setVariable ["ExileFlies", _particleEmitter];