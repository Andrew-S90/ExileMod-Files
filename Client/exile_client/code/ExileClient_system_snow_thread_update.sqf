/**
 * ExileClient_system_snow_thread_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_enableSnow", "_surfaceTypes"];
_enableSnow = false;
if (rain < 0.01) then 
{
	_surfaceTypes = getArray (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Snow" >> "surfaces");
	if ((surfaceType (getPos player)) in _surfaceTypes) then 
	{
		_enableSnow = true;
		ExileSnowClose attachTo [vehicle player, [0, 4, 1]];
		ExileSnowNear attachTo [vehicle player, [0, 4, 1.5]];
		ExileSnowFar attachTo [vehicle player, [0, 4, 2]];
	};
};
if (_enableSnow) then 
{
	ExileSnowClose attachTo [vehicle player, [0, 4, 1]];
	ExileSnowNear attachTo [vehicle player, [0, 4, 1.5]];
	ExileSnowFar attachTo [vehicle player, [0, 4, 2]];
	ExileSnowClose setDropInterval 0.01;
	ExileSnowNear setDropInterval 0.01;
	ExileSnowFar setDropInterval 0.01;
}
else 
{
	ExileSnowClose setDropInterval 0;
	ExileSnowNear setDropInterval 0;
	ExileSnowFar setDropInterval 0;
};
