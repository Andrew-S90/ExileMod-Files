/**
 * ExileClient_util_display_mouseControl_buildLimits
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_xOffset", "_yOffset", "_height", "_width"];
_xOffset = getNumber (configfile >> (_this select 0) >> "controls" >> (_this select 1) >> "CaptureArea" >> "x");
_yOffset = getnumber (configfile >> (_this select 0) >> "controls" >> (_this select 1) >> "CaptureArea" >> "y");
_height = getnumber (configfile >> (_this select 0) >> "controls" >> (_this select 1) >> "CaptureArea" >> "h");
_width = getnumber (configfile >> (_this select 0) >> "controls" >> (_this select 1) >> "CaptureArea" >> "w");
ExileDisplayCurrentLimits = [[_xOffset,_xOffset + _width],[_yOffset,_yOffset + _height]];