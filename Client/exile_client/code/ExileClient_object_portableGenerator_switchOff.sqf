/**
 * ExileClient_object_portableGenerator_switchOff
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_portableGenerator", "_floodLights", "_sound"];
_portableGenerator = _this;
_floodLights = _portableGenerator nearObjects ["Exile_Construction_FloodLight_Static", 50];
if (count _floodLights > 0) then
{
	{
		if(local _x)then
		{
			_x setHit ["light_1_hitpoint", 0]; 	
		}
		else
		{
			["toggleFloodLightRequest", [netId _x, 0.92]] call ExileClient_system_network_send;
		};
	}
	forEach _floodLights;
};
_sound = _portableGenerator getVariable ["Sound", objNull];
if (isNull _sound) then 
{
	_sound = _portableGenerator nearestObject "Exile_Sound_PortableGenerator";
};
if !(isNull _sound) then 
{
	deleteVehicle _sound;
};
_portableGenerator setVariable ["Sound", objNull];
_portableGenerator setVariable ["isRunning", false, true];
true