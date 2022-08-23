/**
 * ExileClient_gui_baseCamera_event_info_onLoadWeather
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_picture"];
_control = _this select 0;
switch true do 
{ 
	case (rain > 0.7) : 
	{
		_picture = "\exile_assets\texture\ui\weather\thunder.paa";
	}; 
	case (rain > 0.3) : 
	{
		_picture = "\exile_assets\texture\ui\weather\rain.paa";
	};
	case (overcast > 0.5) :
	{
		_picture = "\exile_assets\texture\ui\weather\overcast.paa";
	};
	default 
	{
		_picture = "\exile_assets\texture\ui\weather\sunny.paa";
	}; 
};
_control ctrlSetText _picture;
true