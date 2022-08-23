/**
 * ExileClient_object_concreteMixer_network_concreteMixerRemoveSmokeRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_netId", "_concreteMixer", "_emitter"];
_netId = _this select 0;
_concreteMixer = objectFromNetid _netId;
if !(isNull _concreteMixer) then 
{
	_emitter = _concreteMixer getVariable ["ParticleEmitter", objNull];
	if !(isNull _emitter) then 
	{
		deleteVehicle _emitter;
	};
};