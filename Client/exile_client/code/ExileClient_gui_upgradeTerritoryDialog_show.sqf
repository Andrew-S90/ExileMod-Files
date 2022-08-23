/**
 * ExileClient_gui_upgradeTerritoryDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_playerUID", "_territoryDropDown", "_flag", "_buildRights", "_index", "_upgradeButton"];
disableSerialization;
createDialog "RscExileUpgradeTerritoryDialog";
_display = uiNameSpace getVariable ["RscExileUpgradeTerritoryDialog", displayNull];
_playerUID = getPlayerUID player;
_territoryDropDown = _display displayCtrl 4000;
lbClear _territoryDropDown;
{
	_flag = _x;
	_buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
	if (_playerUID in _buildRights) then
	{
		_name = _flag getVariable ["ExileTerritoryName", ""];
		_index = _territoryDropDown lbAdd _name;
		_territoryDropDown lbSetData [_index, netId _flag]; 
	};
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
_upgradeButton = _display displayCtrl 4001;
_upgradeButton ctrlEnable false;