/**
 * ExileClient_gui_hud_renderGrenadePanel
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_panelControl", "_currentThrowable", "_showGrenadePanel", "_grenadeClassName", "_grenadeAmmo", "_ammoControl", "_nameLines", "_single", "_double1", "_double2"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileHUD", displayNull];  
_panelControl = _display displayCtrl 1400;
_currentThrowable = currentThrowable player;
_showGrenadePanel = false;
_grenadeClassName = "";
if !(_currentThrowable isEqualTo []) then
{
	if ((vehicle player) isEqualTo player) then
	{
		_grenadeClassName = _currentThrowable select 0;
		if !(_grenadeClassName isEqualTo "") then
		{
			_showGrenadePanel = true;
		};
	};
};
if !(_showGrenadePanel) then
{
	if (ctrlShown _panelControl) then
	{
		_panelControl ctrlShow false;
	};
}
else 
{
	if (!ctrlShown _panelControl) then
	{
		_panelControl ctrlShow true;
		ExileHudLastRenderedGrenadeClassName = "";
	};
	_grenadeAmmo = { _x isEqualTo _grenadeClassName } count (magazines player);
	_ammoControl = _display displayCtrl 1402;  
	_ammoControl ctrlSetText (str _grenadeAmmo);
	if !(_grenadeClassName isEqualTo ExileHudLastRenderedGrenadeClassName) then
	{
		_nameLines = getArray (missionConfigFile >> "CfgExileHUD" >> "ShortItemNames" >> _grenadeClassName);
		_single = _display displayCtrl 1403;  
		_double1 = _display displayCtrl 1404;  
		_double2 = _display displayCtrl 1405;  
		switch (count _nameLines) do 
		{
			case 1:
			{
				_single ctrlSetText (_nameLines select 0);
				_single ctrlShow true;
				_double1 ctrlShow false;
				_double2 ctrlShow false;
			};
			case 2: 
			{
				_single ctrlShow false;
				_double1 ctrlSetText (_nameLines select 0);
				_double1 ctrlShow true;
				_double2 ctrlSetText (_nameLines select 1);
				_double2 ctrlShow true;
			};
			default
			{
				_single ctrlShow false;
				_double1 ctrlShow false;
				_double2 ctrlShow false;
			};
		};
		ExileHudLastRenderedGrenadeClassName = _grenadeClassName;
	};
};