/**
 * ExileClient_gui_network_dynamicTextRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_txt", "_pos", "_size", "_color", "_xaxis", "_yaxis"];
_txt = _this select 0; 
_pos =  _this select 1; 
_size = _this select 2; 
_color = _this select 3; 
switch (_pos) do {
	case 0 : 
	{
		_xaxis = 0; 
		_yaxis = safeZoneY+0.3;
	};
	case 1 : 
	{
		_xaxis = 0;
		_yaxis = safeZoneY+0.9;
	};
	default 
	{
		_xaxis = 0;
		_xaxis = 0;
	};
};
_txt = '<t color=' + str _color + ' size=' + str _size + ' >' + _txt + '</t>';
[_txt,_xaxis,_yaxis,10,1] spawn BIS_fnc_dynamicText;