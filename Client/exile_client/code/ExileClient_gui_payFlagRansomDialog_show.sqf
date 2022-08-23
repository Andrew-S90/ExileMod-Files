/**
 * ExileClient_gui_payFlagRansomDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_territories", "_playerUID", "_flag", "_buildRights", "_canAdd", "_display", "_territoryDropDown", "_index", "_payButton", "_priceText"];
disableSerialization;
_territories = [];
_playerUID = getPlayerUID player;
{
	_flag = _x;
	_buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
	if (_playerUID in _buildRights) then
	{
		if ((_flag getVariable ["ExileFlagStolen", 0]) isEqualTo 1) then
		{
			_territories pushback _flag;
		};
	};
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");
if (_territories isEqualTo []) then 
{
	["ErrorTitleAndText", ["Nothing to pay!", "None of your territories are missing a flag."]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	_canAdd = [player, "Exile_Item_FlagStolen1"] call ExileClient_util_playerCargo_canAdd;
	if !(_canAdd) then
	{
		["ErrorTitleAndText", ["Your inventory is full!", "You need more inventory space to carry a flag!"]] call ExileClient_gui_toaster_addTemplateToast;
	}
	else
	{	
		createDialog "RscExilePayFlagRansomDialog";
		_display = uiNameSpace getVariable ["RscExilePayFlagRansomDialog", displayNull];
		_territoryDropDown = _display displayCtrl 4000;
		lbClear _territoryDropDown;
		{
			_index = _territoryDropDown lbAdd (_x getVariable ["ExileTerritoryName", ""]);
			_territoryDropDown lbSetData [_index, netId _x]; 
		}
		forEach _territories;
		_payButton = _display displayCtrl 4001;
		_payButton ctrlEnable false;
		_priceText = _display displayCtrl 4002;
		_priceText ctrlSetStructuredText parsetext "<t size='1.4'></t>";
		true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
	};
};
true