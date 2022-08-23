/**
 * ExileClient_system_breathing_dropParticle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
drop 
[
	["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 8, 1],
	"",
	"Billboard",
	1, 
	_this select 0, 
	_this select 1, 
	_this select 2, 
	random 20, 
	0.05, 
	0.038, 
	0.02, 
	[random 0.2, 0.6 + (random 0.4)], 
	[ 
		[1,1,1,0.02], 
		[1,1,1,0.08], 
		[1,1,1,0.06], 
		[1,1,1,0.04], 
		[1,1,1,0.02],
		[1,1,1,0.00]
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