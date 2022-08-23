/**
 * ExileClient_gui_baseCamera_event_onLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_camerasCombo", "_range", "_cameras", "_index"];
_display = uiNamespace getVariable ["RscExileCameraView",displayNull];
_camerasCombo = _display displayCtrl 4005;
_range = ExileCameraSystemBase getVariable ["ExileTerritorySize",0];
_cameras = ExileCameraSystemBase nearObjects ["Exile_Construction_BaseCamera_Static",_range];
lbClear _camerasCombo;
if(_cameras isEqualTo [])then
{
	_index = _camerasCombo lbAdd "No cameras in your base";
	_camerasCombo lbSetData [_index,"0"];
	_camerasCombo lbSetPictureRight [_index,"\exile_assets\texture\ui\cameraView\camera.paa"];
}
else
{
	_index = _camerasCombo lbAdd "Select a Camera";
	_camerasCombo lbSetData [_index,"0"];
	_camerasCombo lbSetPictureRight [_index,"\exile_assets\texture\ui\cameraView\camera.paa"];
	{
		_index = _camerasCombo lbAdd ("Camera " + (str _forEachIndex));
		_camerasCombo lbSetData [_index,netId _x];
		_camerasCombo lbSetPicture [_index,"\exile_assets\texture\ui\cameraView\camera.paa"];
		if(_x getVariable ["ExileCameraInUse",false])then
		{
			_camerasCombo lbSetColor [_index,[221/255, 38/255, 38/255, 1]];
			_camerasCombo lbSetPictureRightColor [_index,[221/255, 38/255, 38/255, 1]];
			_camerasCombo lbSetTextRight [_index,"IN USE!"];
			_camerasCombo lbSetColorRight [_index,[221/255, 38/255, 38/255, 1]];
		}
		else
		{
			_camerasCombo lbSetColor [_index,[160/255, 223/255, 59/255, 1]];
		};
	}
	forEach _cameras;
};
ExileClientPlayerIsInSecurityCamera = true;
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0.39, 0.32, 0.25, 1], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]]; 
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectEnable true;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectCommit 0;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectEnable true;
false call ExileClient_gui_hud_toggle;
_camerasCombo
