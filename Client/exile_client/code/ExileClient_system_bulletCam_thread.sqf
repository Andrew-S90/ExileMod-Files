/**
 * ExileClient_system_bulletCam_thread
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_projectile", "_hud", "_renderSurface", "_status", "_startTime"];
disableSerialization;
_projectile = _this;
_hud = uiNamespace getVariable "RscExileHUD";
_renderSurface = _hud displayCtrl 1502;
_renderSurface ctrlSetFade 0;
_renderSurface ctrlCommit 0;
_status = _hud displayCtrl 1504;
_status ctrlSetText "REC";
_status ctrlSetTextColor [0.91, 0, 0, 1];
_status ctrlCommit 0;
ExileClientBulletCamera = "camera" camCreate (getPos _projectile);
ExileClientBulletCamera camSetFocus [50, 1];
ExileClientBulletCamera camCommit 0;
ExileClientBulletCamera cameraEffect ["External", "Back", "ExileBulletCameraRenderSurface"];
"ExileBulletCameraRenderSurface" setPiPEffect [3, 1, 1.1, 0.3, 0, [0, 0, 0, 0], [1, 1, 1, 0], [1 ,1 ,1 ,1]];
showCinemaBorder false;
_startTime = time;
waitUntil 
{
	if (isNull _projectile) exitWith 
	{
		true
	};
	if ((time - _startTime) > 5) exitWith 
	{
		true
	};
	if (((getPos _projectile) select 2) < 0.5) exitWith
	{
		true
	};
	ExileClientBulletCamera camSetTarget _projectile;
	ExileClientBulletCamera camSetRelPos [0, -2, 0];
	ExileClientBulletCamera camCommit 0;
	false
};
uiSleep 2;
_renderSurface ctrlSetFade 1;
_renderSurface ctrlCommit 0.25;
_status ctrlSetText "NO SIGNAL";
_status ctrlSetTextColor [1, 1, 1, 1];
_status ctrlCommit 0;
uiSleep 0.25;
call ExileClient_system_bulletCam_destroy;