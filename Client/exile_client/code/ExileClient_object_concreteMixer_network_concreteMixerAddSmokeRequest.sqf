/**
 * ExileClient_object_concreteMixer_network_concreteMixerAddSmokeRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_netId", "_concreteMixer", "_particleEmitter"];
_netId = _this select 0;
_concreteMixer = objectFromNetID _netId;
if !(isNull _concreteMixer) then 
{
	_particleEmitter = "#particlesource" createVehicleLocal (getPos _concreteMixer);
	_particleEmitter setParticleParams   
	[  
		["\A3\data_f\ParticleEffects\Universal\Universal", 16, 7, 33, 1],   
		"",  
		"Billboard",  
		1,  
		3,  
		[0, 0, 0],  
		[0, 0, 1.4],  
		1, 1.3, 1, 1,   
		[0.5, 2],  
		[[1, 1, 1, 0],[1, 1, 1, 0.1], [1, 1, 1, 0]],  
		[0.25],  
		0.01,  
		0.03,  
		"",  
		"",  
		""
	];
	_particleEmitter setParticleRandom 
	[
		2,
		[0.1, 0.1, 0.1],
		[0, 0, 0.2],
		1, 
		0.5, 
		[0, 0, 0, 0.1],
		0.01,
		0.01,
		360
	];
	_particleEmitter setDropInterval 0.1;
	_particleEmitter attachTo [_concreteMixer, [0, 0, 1.25]];
	_concreteMixer setVariable ["ParticleEmitter", _particleEmitter];
};