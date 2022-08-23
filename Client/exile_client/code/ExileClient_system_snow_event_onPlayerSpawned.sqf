/**
 * ExileClient_system_snow_event_onPlayerSpawned
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !((getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Snow" >> "enable")) isEqualTo 1) exitWith {false}; 
ExileSnowClose = "#particlesource" createVehicleLocal [0, 0, 0];    
ExileSnowClose setParticleClass "Exile_Snow_Close";    
ExileSnowClose setDropInterval 0;
ExileSnowClose attachTo [vehicle player, [0, 4, 1]];
ExileSnowNear = "#particlesource" createVehicleLocal [0, 0, 0];    
ExileSnowNear setParticleClass "Exile_Snow_Near";    
ExileSnowNear setDropInterval 0;
ExileSnowNear attachTo [vehicle player, [0, 4, 1.5]];
ExileSnowFar = "#particlesource" createVehicleLocal [0, 0, 0];  
ExileSnowFar setParticleClass "Exile_Snow_Far";  
ExileSnowFar setDropInterval 0;
ExileSnowFar attachTo [vehicle player, [0, 4, 2]];
ExileSnowThreadHandle = [2, ExileClient_system_snow_thread_update, [], true] call ExileClient_system_thread_addtask;