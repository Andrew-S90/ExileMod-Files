/**
 * ExileClient_gui_setupTerritoryDialog_event_onPlaceButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBox", "_territoryName", "_selectedFlag", "_alphabet", "_forbiddenCharacter"];
_display = uiNameSpace getVariable ["RscExileSetupTerritoryDialog", displayNull];
_listBox = _display displayCtrl 4001;
_territoryName = ctrlText (_display displayCtrl 4000);
_selectedFlag = lbCurSel _listBox;
_selectedFlag = _listBox lbData _selectedFlag;
try
{
	if((count _territoryName) isEqualTo 0) then 
	{
		throw "Please enter a territory name.";
	};
	_territoryName = _territoryName call ExileClient_util_string_trim;
	_alphabet = getText (missionConfigFile >> "CfgClans" >> "clanNameAlphabet");
	_forbiddenCharacter = [_territoryName, _alphabet] call ExileClient_util_string_containsForbiddenCharacter;
	if !(_forbiddenCharacter isEqualTo -1) then 
	{
		throw "Invalid character in input. Please try again.";
	};
	["Exile_Item_Flag",_selectedFlag,_territoryName] call ExileClient_construction_beginNewObject;
}
catch
{
	["ErrorTitleAndText", ["Failed to place flag!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
closeDialog 0;
true