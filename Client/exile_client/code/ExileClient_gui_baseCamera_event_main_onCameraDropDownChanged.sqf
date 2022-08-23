/**
 * ExileClient_gui_baseCamera_event_main_onCameraDropDownChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_cameraCombo", "_index", "_cameraNetId", "_camera"];
_cameraCombo = _this select 0;
_index = _this select 1;
_cameraNetId = (_cameraCombo lbData _index);
if(_cameraNetId isEqualTo "0")then
{
	true call ExileClient_gui_baseCamera_event_toggleCameraScreen;
	if (!isNull ExileClientCameraParentObject) then
	{
	    ExileClientCameraParentObject setVariable ["ExileCameraInUse", false, true];    
	};
}
else
{	
	_camera = (objectFromNetId _cameraNetId);
	if!(_camera getVariable ["ExileCameraInUse",false])then
	{
		[_camera,isNull ExileClientCameraObject] call ExileClient_gui_baseCamera_event_camAction;
		ExileClientCameraObject cameraEffect ["internal", "back"];
		ExileCameraViewMouseZFoV = 0.7;
		ExileClientCameraObject camPrepareFOV ExileCameraViewMouseZFoV;
		false call ExileClient_gui_baseCamera_event_toggleCameraScreen;
	}
	else
	{
		["ErrorTitleAndText", ["Camera is already in use!", "A camera can only be used by one person at a time."]] call ExileClient_gui_toaster_addTemplateToast;
	};
};
