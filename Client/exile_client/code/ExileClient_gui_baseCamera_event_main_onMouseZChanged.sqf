/**
 * ExileClient_gui_baseCamera_event_main_onMouseZChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_scroll"];
_scroll = _this select 1;
if(_scroll > 0)then
{
	ExileCameraViewMouseZFoV = (((ExileCameraViewMouseZFoV - 0.05)min 1)max 0.05);	
}
else
{
	ExileCameraViewMouseZFoV = (((ExileCameraViewMouseZFoV + 0.05)min 1)max 0.05);
};
ExileClientCameraObject camSetFov ExileCameraViewMouseZFoV;
ExileClientCameraObject camCommit 0;
