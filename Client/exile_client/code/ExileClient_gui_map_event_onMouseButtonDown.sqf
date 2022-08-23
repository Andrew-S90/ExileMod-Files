/**
 * ExileClient_gui_map_event_onMouseButtonDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_mapControl", "_mouseButton", "_shift", "_ctrl", "_alt", "_stopPropagation"];
_mapControl = _this select 0;
_mouseButton = _this select 1;
_shift = _this select 4;
_ctrl = _this select 5;
_alt = _this select 6;
_stopPropagation = false;
if (_mouseButton isEqualTo 1) then 
{
	ExileClientLastMapDown = diag_tickTime;
};
_stopPropagation