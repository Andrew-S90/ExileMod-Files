/**
 * ExileClient_gui_baseCamera_event_main_onMouseButtonUp
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_rightClick", "_positionX", "_positionY", "_inScreen"];
_control = _this select 0;
_rightClick = if((_this select 1) isEqualTo 1)then{true}else{false};
_positionX = _this select 2;
_positionY = _this select 3;
_inScreen = [_positionX,_positionY] call ExileClient_util_display_mouseControl_inLimit;
if(_inScreen)then
{
	if(_rightClick)then
	{
		ExileCameraRightClickDown = false;
	};
};
true