/**
 * ExileClient_gui_setupTerritoryDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBox", "_myUID", "_flags", "_restrictToUID", "_flagEntry"];
disableSerialization;
createDialog "RscExileSetupTerritoryDialog";
_display = uiNameSpace getVariable ["RscExileSetupTerritoryDialog", displayNull];
_listBox = _display displayCtrl 4001;
lbClear _listBox;
_myUID = getPlayerUID player;
_flags = [];
if(isClass (missionConfigFile >> "CfgFlags"))then
{
	_flags = _flags + ("true" configClasses (missionConfigFile >> "CfgFlags"));
};
_flags = _flags + ("true" configClasses (configFile >> "CfgFlagsNative"));
{
	_restrictToUID = getArray (_x >> "uids");
	if ((_myUID in _restrictToUID) || (_restrictToUID isEqualTo [])) then
	{
		_flagEntry = _listBox lbAdd (getText (_x >> "name"));
		_listBox lbSetData [_flagEntry,configName _x];
		_listBox lbSetPicture [_flagEntry,(getText (_x >> "texture"))];
	};
}
forEach _flags;
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
true
