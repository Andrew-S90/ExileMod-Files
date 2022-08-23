/**
 * ExileClient_gui_loadingScreen_event_onKeyDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_keyCode", "_result"];
_keyCode = _this select 1;
_result = false;
if (_keyCode == 0x01) then
{
	_result = true;
};
_result