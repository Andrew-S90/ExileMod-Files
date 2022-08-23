/**
 * ExileClient_gui_xm8_slide_extraApps_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_row", "_apps", "_i", "_col", "_appID", "_extraControlGroup", "_appTile"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_row = 0;
_apps = [];
for "_i" from 1 to 14 do 
{
	_col = (_i - 1) % 5;
	if (_i < 10) then 
	{
		_appID = format["XM8_App0%1_Button", _i];	
	}
	else
	{
		_appID = format["XM8_App%1_Button",_i];
	};
	if !(getText(missionConfigFile >> _appID >> "text") isEqualTo "") then 
	{
		_extraControlGroup = _display displayCtrl 5000;
		_appTile = _display ctrlCreate [_appID, -1, _extraControlGroup];
		_appTile ctrlSetPosition [(1 + (6.5 * _col)) * (0.025), (2 + (5.5 * _row)) * (0.04)];
		_appTile ctrlCommit 0;
		_appTile ctrlRemoveAllEventHandlers "ButtonClick";
		_appTile ctrlAddEventHandler ["ButtonClick", format["'%1' call ExileClient_gui_xm8_slide_extraApps_showApp", _appID]];
		_apps pushBack _appTile;	
	};
	if (_col isEqualTo 4) then 
	{
		_row = _row + 1;
	};
};
_display setVariable ["ExileExtraApps", _apps];