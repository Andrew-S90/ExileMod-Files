/**
 * ExileClient_gui_hud_renderVehiclePanel
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_vehiclePanelControl", "_vehicle", "_showVehiclePanel", "_showHeight", "_showSpeed", "_showFuel", "_showDriverAmmo", "_vehicleRole", "_fuelControl", "_speedControl", "_heightControl", "_speed", "_height", "_heightString", "_vehicleClassName", "_fuel", "_tankSize", "_tankSizeString", "_fuelRemaining", "_fuelRemainingString"];
disableSerialization;
if (diag_tickTime - ExileHudLastVehicleRenderedAt >= 0.1) then
{
	ExileHudLastVehicleRenderedAt = diag_tickTime;
	_display = uiNamespace getVariable "RscExileHUD";
	_vehiclePanelControl = _display displayCtrl 1200;
	_vehicle = vehicle player;
	_showVehiclePanel = false;
	_showHeight = true;
	_showSpeed = true;
	_showFuel = true;
	_showDriverAmmo = true; 
	if !(_vehicle isEqualTo player) then
	{
		_vehicleRole = assignedVehicleRole player;
		if (toLower (_vehicleRole select 0) isEqualTo "driver") then
		{
			_showVehiclePanel = true;
			switch (true) do 
			{
				case (_vehicle isKindOf "Bicycle"):
				{
					_showFuel = false;
					_showDriverAmmo = false;
					_showHeight = false;
				};
				case (_vehicle isKindOf "ParachuteBase"): 
				{
					_showFuel = false;
					_showDriverAmmo = false;
				};
				case (_vehicle isKindOf "StaticWeapon"):
				{
					_showVehiclePanel = false; 
				};
				case (_vehicle isKindOf "Rubber_duck_base_F"),
				case (_vehicle isKindOf "Boat_Civil_01_base_F"),
				case (_vehicle isKindOf "LandVehicle"): 
				{
					_showHeight = false; 
				};
			};
		};
	};
	if !(_showVehiclePanel) then
	{
		if (ctrlShown _vehiclePanelControl) then
		{
			_vehiclePanelControl ctrlShow false;
		};
	}
	else 
	{
		_fuelControl = _display displayCtrl 1204;
		_speedControl = _display displayCtrl 1202;
		_heightControl = _display displayCtrl 1203;
		if !(ctrlShown _vehiclePanelControl) then
		{
			_vehiclePanelControl ctrlShow true;
			_speedControl ctrlShow _showSpeed;
			_heightControl ctrlShow _showHeight;
			_fuelControl ctrlShow _showFuel;
		};
		if (_showSpeed) then
		{
			_speed = round (speed _vehicle);
			if (_speed isEqualTo -0) then
			{
				_speed = 0;
			};
			_speedControl ctrlSetText (str _speed);
		};
		if (_showHeight) then
		{
			_height = ceil ((getPos _vehicle) select 2);
			if (_height isEqualTo -0) then
			{
				_height = 0;
			};
			if (_height > 999) then
			{
				_heightString = format ["%1k", [_height / 1000, 2] call ExileClient_util_math_round];
			}
			else 
			{
				_heightString = str (round _height);
			};
			_heightControl ctrlSetText (format ["%1m", _heightString]);		
		};
		if (_showFuel) then
		{
			_vehicleClassName = typeOf _vehicle;
			if !(_vehicleClassName isEqualTo ExileHudLastRenderedVehicleClassName) then
			{
				ExileHudLastRenderedVehicleFuelTankSize = getNumber(configFile >> "CfgVehicles" >> _vehicleClassName >> "fuelCapacity"); 
				ExileHudLastRenderedVehicleClassName = _vehicleClassName;
			};
			_fuel = fuel _vehicle;
			if (_fuel > 0.25) then
			{
				_fuelControl ctrlSetTextColor [111/255, 113/255, 122/255, 1];
			}
			else 
			{
				_fuelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
			};	
			_tankSize = ExileHudLastRenderedVehicleFuelTankSize;
			if (_tankSize > 999) then
			{
				_tankSizeString = format ["%1k", [_tankSize / 1000, 2] call ExileClient_util_math_round];
			}
			else 
			{
				_tankSizeString = str (round _tankSize);
			};
			_fuelRemaining = _fuel * ExileHudLastRenderedVehicleFuelTankSize;
			if (_fuelRemaining > 999) then
			{
				_fuelRemainingString = format ["%1k", [_fuelRemaining / 1000, 2] call ExileClient_util_math_round];
			}
			else 
			{
				_fuelRemainingString = str (round _fuelRemaining);
			};
			_fuelControl ctrlSetText format ["%1/%2l", _fuelRemainingString, _tankSizeString];
		};
	};
};