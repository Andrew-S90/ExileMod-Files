/**
 * ExileClient_gui_itemDetails_event_onTabButtonClicked
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_tabName", "_display", "_tabDetails", "_tabRecipes"];
disableSerialization;
_tabName = _this;
_display = findDisplay 24004;
_tabDetails = _display displayCtrl 5003;
_tabRecipes = _display displayCtrl 5004;
switch (_tabName) do
{
	case "RECIPES":
	{
		_tabDetails ctrlShow false;
		_tabRecipes ctrlShow true;
	};
	case "DETAILS":
	{
		_tabDetails ctrlShow true;
		_tabRecipes ctrlShow false;
	};
};
_tabDetails ctrlCommit 1;
_tabRecipes ctrlCommit 1;
true