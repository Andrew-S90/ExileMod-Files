/**
 * ExileClient_gui_hud_renderBulletCam
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_role", "_hud", "_bulletCam"];
disableSerialization;
if (cameraView isEqualTo "GUNNER") then
{
	if ((currentMagazine player) isEqualTo "") then 
	{
		ExileClientBulletCamShouldBeVisible = false;
	}
	else 
	{
		ExileClientBulletCamShouldBeVisible = isNumber (configFile >> "CfgMagazines" >> (currentMagazine player) >> "exileBulletCam");
		if (ExileClientBulletCamShouldBeVisible) then 
		{
			if !((vehicle player) isEqualTo player) then
			{
				_role = player call ExileClient_util_vehicle_getRole;
				if (_role in ["driver", "gunner", "commander"]) then
				{
					ExileClientBulletCamShouldBeVisible = false;
				};
			};
		};
	};
}
else 
{
	ExileClientBulletCamShouldBeVisible = false;
};
if (ExileClientBulletCamShouldBeVisible) then 
{
	if (!ExileClientBulletCamIsVisible) then 
	{
		_hud = uiNamespace getVariable "RscExileHUD";
		_bulletCam = _hud displayCtrl 1500;
		_bulletCam ctrlShow true;
		ExileClientBulletCamIsVisible = true;
	};
}
else 
{
	if (ExileClientBulletCamIsVisible) then 
	{
		_hud = uiNamespace getVariable "RscExileHUD";
		_bulletCam = _hud displayCtrl 1500;
		_bulletCam ctrlShow false;
		ExileClientBulletCamIsVisible = false;
	};
};