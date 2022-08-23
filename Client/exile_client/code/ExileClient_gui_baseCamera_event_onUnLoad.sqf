/**
 * ExileClient_gui_baseCamera_event_onUnLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileCameraSystemBase = objNull;
ExileClientCameraRightClickDown = false;
if!(isNull ExileClientCameraObject)then
{
	ExileClientCameraObject cameraEffect ["terminate", "back"];
	camDestroy ExileClientCameraObject;
	ExileClientCameraObject = objNull;
	ExileClientCameraParentObject setVariable ["ExileCameraInUse",false,true];	
	ExileClientCameraParrentObject = objNull;
};
ExileClientCameraNVG = false;
ExileClientPlayerIsInSecurityCamera = false;
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0.39, 0.32, 0.25, 1], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]]; 
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectEnable true;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectCommit 0;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectEnable false;
true call ExileClient_gui_hud_toggle;
true