/**
 * ExileClient_gui_baseCamera_event_toggleCameraScreen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_mode", "_display", "_hideControls"];
_mode = if(_this)then{0}else{1};
_display = uiNamespace getVariable ["RscExileCameraView",displayNull];
_hideControls = getArray(configFile >> "RscExileCameraView" >> "hideControls");
{
	if((ctrlClassName _x) in _hideControls)then
	{
		_x ctrlSetFade _mode;
		_x ctrlCommit 1;
	};
}
forEach (allControls _display);
true