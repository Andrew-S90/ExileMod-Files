/**
 * ExileClient_gui_inventory_updateItemColors
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_timeWaited", "_exitLoop", "_listBoxIds", "_listBox", "_listBoxSize", "_i", "_itemDisplayName", "_itemClassName", "_configName", "_configSearch", "_quality", "_color"];
[] spawn 
{
	disableSerialization;
	_display = findDisplay 602;
	_timeWaited = 0;
	_exitLoop = false;
	_listBoxIds = 
	[
		619, 
		632, 
		633, 
		638, 
		640 
	];
	while {!_exitLoop} do
	{	
		{
			_listBox = _display displayCtrl _x;
			_listBoxSize = lbSize _listBox; 
			if (_listBoxSize > 0) then
			{
				for "_i" from 0 to (_listBoxSize - 1) do
				{
					_itemDisplayName = _listBox lbText _i;
					_itemClassName = _listBox lbData _i;
					_configName = "";
					if( _itemClassName == "" ) then
					{
						_configSearch = [_itemDisplayName] call ExileClient_util_gear_getConfigEntryByDisplayName;
						_itemClassName = _configSearch select 0;
						_configName = _configSearch select 1;
					}
					else 
					{
						_configName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
					};
					if( _configName != "" ) then
					{
						_quality = getNumber(configFile >> _configName >> _itemClassName >> "quality");
						_color = [1, 1, 1, 1];
						switch (_quality) do
						{
							case 2: 		{ _color = [0.62, 0.87 ,0.23, 1]; };
							case 3:		{ _color = [0, 0.78, 0.92, 1]; };
							case 4:		{ _color = [0.62, 0.27, 0.58, 1]; };
							case 5:		{ _color = [1, 0.7, 0.09, 1]; };
							case 6:		{ _color = [0.93, 0, 0.48, 1]; };
							default 					{ _color = [1, 1, 1, 1]; };						
						};
						_listBox lbSetColor [_i, _color];
					};
				};
				_exitLoop = true;
			};
		}
		forEach _listBoxIds;
		if (_timeWaited >= 0.5) then
		{
			_exitLoop = true;
		}
		else 
		{
			uiSleep 0.01;
			_timeWaited = _timeWaited + 0.01;
		};
	};
	systemChat "yay";
};
true