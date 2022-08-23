/**
 * ExileClient_object_floodLight_network_toggleFloodLightRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_floodLightObjectNetID", "_damage", "_floodLight"];
_floodLightObjectNetID = _this select 0;
_damage = _this select 1;
_floodLight = objectFromNetId _floodLightObjectNetID;
_floodLight setHit ["light_1_hitpoint", _damage];
true