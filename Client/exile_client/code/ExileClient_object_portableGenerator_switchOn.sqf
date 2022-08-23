/**
 * ExileClient_object_portableGenerator_switchOn
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
		if (_x getHit "light_1_hitpoint" < 0.99) then
		{
			if (local _x) then
			{
				_x setHit ["light_1_hitpoint", 0]; 	
			}
			else
			{
				["toggleFloodLightRequest", [netId _x, 0]] call ExileClient_system_network_send;
			};
		};
	}
	forEach _floodLights;
};
_sound = createSoundSource ["Exile_Sound_PortableGenerator", getPos _portableGenerator, [], 0];
_portableGenerator setVariable ["isRunning", true, true];
_portableGenerator setVariable ["Sound", _sound];
true