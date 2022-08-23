/**
 * ExileClient_gui_xm8_event_onKeyDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_stopPropagation", "_caller", "_keyCode", "_shiftState", "_controlState", "_altState"];
_stopPropagation = false;
_caller = _this select 0;
_keyCode = _this select 1;
_shiftState = _this select 2;
_controlState = _this select 3;
_altState = _this select 4; 
switch (_keyCode) do  
{ 
	case 0x0F:
	{
		_stopPropagation = true;
	};
};
_stopPropagation