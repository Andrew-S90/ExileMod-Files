/**
 * ExileClient_gui_keypadDialog_event_onKeyUp
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
	case 0x52, case 0x0B: { 0 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x4F, case 0x02: { 1 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x50, case 0x03: { 2 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x51, case 0x04: { 3 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x4B, case 0x05: { 4 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x4C, case 0x06: { 5 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x4D, case 0x07: { 6 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x47, case 0x08: { 7 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x48, case 0x09: { 8 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x49, case 0x0A: { 9 call ExileClient_gui_keypadDialog_addDigit; _stopPropagation = true; };
	case 0x0E:
	{
		ExileClientPinCode = ExileClientPinCode select [0,(count ExileClientPinCode) -1];
		call ExileClient_gui_keypadDialog_updateControls;
		_stopPropagation = true;	
	};
	case 0x1C:
	{
		closeDialog 0;
		_stopPropagation = true;
	};
	case 0x9C:
	{
		closeDialog 0;
		_stopPropagation = true;
	};
	case 0x01: 
	{ 
		ExileClientPinCode = "";
		closeDialog 0;
		_stopPropagation = true; 
	};
	default {};
};
_stopPropagation