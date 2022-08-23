/**
 * ExileClient_system_bulletCam_destroy
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if !(isNil "ExileClientBulletCamera") then
{
	ExileClientBulletCamera cameraEffect ["Terminate", "Back"];
	camDestroy ExileClientBulletCamera;
	ExileClientBulletCamera = nil;
};
if !(isNil "ExileClientBulletCameraThread") then 
{
	terminate ExileClientBulletCameraThread;
	ExileClientBulletCameraThread = nil;
};