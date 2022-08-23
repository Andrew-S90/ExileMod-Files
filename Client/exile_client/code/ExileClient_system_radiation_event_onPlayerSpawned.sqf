/**
 * ExileClient_system_radiation_event_onPlayerSpawned
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !((getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Radiation" >> "enable")) isEqualTo 1) exitWith {false}; 
ExilePlayerRadiation = 0;
ExilePlayerRadiationLastCheck = 0;
ExilePostProcessing_RadiationChroma ppEffectEnable true;
ExilePostProcessing_RadiationChroma ppEffectAdjust [0,0,true];
ExilePostProcessing_RadiationChroma ppEffectCommit 0;
ExilePostProcessing_RadiationColor ppEffectEnable true;
ExilePostProcessing_RadiationColor ppEffectAdjust [1,1,0,[0,0,0,0],[1.5,1.3,1,1],[0.8,0.5,0.9,0],[0,0,0,0,0,0,4]];
ExilePostProcessing_RadiationColor ppEffectCommit 0;
ExilePostProcessing_RadiationFilm ppEffectEnable true;
ExilePostProcessing_RadiationFilm ppEffectAdjust [0,8.39,8,0.9,0.9,true];
ExilePostProcessing_RadiationFilm ppEffectCommit 0;
ExileRadiationThreadHandle = [2, ExileClient_system_radiation_thread_update, [], true] call ExileClient_system_thread_addtask;
