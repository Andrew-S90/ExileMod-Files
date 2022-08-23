/**
 * ExileClient_gui_baseCamera_event_camAction
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_newCameraPerent", "_startPosition", "_endPosition"];
_newCameraPerent = _this select 0;
if(!isNull ExileClientCameraParentObject)then
{
	ExileClientCameraParentObject setVariable ["ExileCameraInUse",false,true];	
};
ExileClientCameraParentObject = _newCameraPerent;
ExileClientCameraParentObject setVariable ["ExileCameraInUse",true,true];	
_startPosition = ExileClientCameraParentObject modelToWorld (ExileClientCameraParentObject selectionPosition "cctv_view_from");
_endPosition = ExileClientCameraParentObject modelToWorld (ExileClientCameraParentObject selectionPosition "cctv_view_to");
if (_this select 1) then
{
	ExileClientCameraObject = "camera" camCreate _startPosition;
};
ExileClientCameraObject camSetPos _startPosition;
ExileClientCameraObject camSetTarget _endPosition;
ExileCameraViewMouseZFoV = 1;
ExileClientCameraObject camPrepareFOV ExileCameraViewMouseZFoV;
ExileClientCameraObject camCommit 0;
showCinemaBorder false;
ExileClientCameraObject