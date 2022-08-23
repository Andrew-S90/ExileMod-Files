/**
 * ExileClient_system_snow_event_onPlayerDied
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !((getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Snow" >> "enable")) isEqualTo 1) exitWith {false}; 
deleteVehicle ExileSnowClose;
deleteVehicle ExileSnowNear;
deleteVehicle ExileSnowFar;
[ExileSnowThreadHandle] call ExileClient_system_thread_removeTask;