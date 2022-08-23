/**
 * ExileClient_system_breathing_event_onPlayerSpawned
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !((getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Breathing" >> "enable")) isEqualTo 1) exitWith {false}; 
ExileLastBreathDroppedAt = diag_tickTime;
ExileNextAutoBreathAt = diag_tickTime;
player addEventHandler ["SoundPlayed", {[] call ExileClient_system_breathing_breathe}];
ExileBreathingThreadHandle = [0.2, ExileClient_system_breathing_thread_update, [], true] call ExileClient_system_thread_addtask;