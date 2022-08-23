/**
 * ExileClient_system_autoRun_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_gradient"];
if (call ExileClient_system_autoRun_canAutoRun) then
{
	if (getNumber(missionConfigFile >> "CfgPlayer" >> "useGradientAffectedAutoRun") isEqualTo 1) then 
	{
		_gradient = player call ExileClient_util_world_getTerrainGradient;
		switch (true) do
		{
			case (_gradient < 0): 
			{
				call ExileClient_system_autoRun_stop;
			};
			case (_gradient < 18): 
			{
				"FastF" call ExileClient_system_autoRun_switch;
			};
			case (_gradient < 30): 
			{
				"SlowF" call ExileClient_system_autoRun_switch;
			};
			case (_gradient < 55): 
			{
				"WalkF" call ExileClient_system_autoRun_switch;
			};
			default 
			{
				"Stop" call ExileClient_system_autoRun_switch;
			};
		};
	}
	else
	{
		player playAction "FastF";
	};	
}
else 
{
	call ExileClient_system_autoRun_stop;
};
true