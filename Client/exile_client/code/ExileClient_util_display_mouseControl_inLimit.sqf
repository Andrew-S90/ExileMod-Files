/**
 * ExileClient_util_display_mouseControl_inLimit
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_positionX", "_positionY"];
_positionX = _this select 0;
_positionY = _this select 1;
if (_positionX > ((ExileDisplayCurrentLimits select 0) select 1)) exitWith {false};
if (_positionX < ((ExileDisplayCurrentLimits select 0) select 0)) exitWith {false};
if (_positionY > ((ExileDisplayCurrentLimits select 1) select 1)) exitWith {false};
if (_positionY < ((ExileDisplayCurrentLimits select 1) select 0)) exitWith {false};
true