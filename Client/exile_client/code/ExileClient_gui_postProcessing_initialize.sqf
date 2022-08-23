/**
 * ExileClient_gui_postProcessing_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientPostProcessingColorCorrections = ppEffectCreate ["colorCorrections", 1500];
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0.39, 0.32, 0.25, 1], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]]; 
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectEnable true;
ExileClientPostProcessingBackgroundBlur = ppEffectCreate ["dynamicBlur", 401];
ExileClientPostProcessingBackgroundBlur ppEffectAdjust [1];
ExileClientPostProcessingBackgroundBlur ppEffectCommit 0;
ExileClientPostProcessingBackgroundBlur ppEffectEnable false;
ExileClientPostProcessingDelirium = ppEffectCreate ["wetDistortion", 301];
ExileClientPostProcessingDelirium ppEffectAdjust [2, 0.1, 0.1, 0.2, 0.2, 2, 2, 0.01, 0.01, 0.01, 0.01, 0.01, 0.1, 2, 2];
ExileClientPostProcessingDelirium ppEffectCommit 0;
ExileClientPostProcessingDelirium ppEffectEnable false;
ExileClientPostProcessingSecurityCameraFilmGrain = ppEffectCreate ["FilmGrain",2000];
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectAdjust [0.4,3.5,5,0.6,0.6,true];
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectCommit 0;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectEnable false;
true