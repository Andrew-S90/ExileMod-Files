/**
 * ExileClient_object_anomaly_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !((getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Anomalies" >> "enable")) isEqualTo 1) exitWith {false}; 
ExileNextAnomalyAt = diag_tickTime + (30 + (random 30));
[5, ExileClient_object_anomaly_thread_update, [], true] call ExileClient_system_thread_addtask;