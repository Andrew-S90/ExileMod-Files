/**
 * ExileClient_gui_itemDetails_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_configName", "_itemClassName", "_itemConfig", "_itemDisplayName", "_itemPicture", "_requiredTools", "_equippedMagazines", "_dialog", "_hasAllTools", "_quality", "_qualityColor", "_qualityName", "_promotedStats", "_i", "_controlID", "_itemDescription", "_libraryDescription", "_toolItemClassName", "_toolItemName", "_descriptionControl", "_craftingRecipes", "_craftingRecipesListBox", "_craftingButton", "_craftingRecipesCaption", "_recipeClassName", "_recipeName", "_recipePicture", "_listItemIndex"];
_configName = _this select 0;
_itemClassName = _this select 1;
_itemConfig = configFile >> _configName >> _itemClassName;
_itemDisplayName = getText(_itemConfig >> "displayName");
_itemPicture = getText(_itemConfig >> "picture");
_requiredTools = [];
_equippedMagazines = magazines player;
ExileClientSelectedInventoryItem = [_itemClassName, _itemDisplayName, _itemPicture];
createDialog "RscExileItemDetailsDialog";
waitUntil { !isNull findDisplay 24004 };
_dialog = uiNameSpace getVariable ["RscExileItemDetailsDialog", displayNull];
(_dialog displayCtrl 1300) ctrlEnable false;
(_dialog displayCtrl 1301) ctrlEnable false;
(_dialog displayCtrl 1303) ctrlEnable false;
(_dialog displayCtrl 1302) ctrlShow false;
(_dialog displayCtrl 5000) ctrlSetText _itemPicture;
if( isClass(_itemConfig >> "Interactions" >> "Consuming") )  then
{
	_requiredTools = getArray (_itemConfig >> "Interactions" >> "Consuming" >> "tools");
	_hasAllTools = true;
	{
		if !(_x in _equippedMagazines) exitWith 
		{
			_hasAllTools = false;
		};
	}
	forEach _requiredTools;
	(_dialog displayCtrl 1300) ctrlEnable _hasAllTools;
};
if( isClass(_itemConfig >> "Interactions" >> "Using") )  then
{
	(_dialog displayCtrl 1301) ctrlEnable true;
};
if( isClass(_itemConfig >> "Interactions" >> "Constructing") )  then
{
	(_dialog displayCtrl 1303) ctrlEnable true;
};
_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "quality");
_qualityColor = "#ffffff";
_qualityName = "Item Level 1";
switch (_quality) do
{
	case 2: 		
	{ 
		_qualityColor = "#9EDD3A";
		_qualityName = "Item Level 2";
	};
	case 3:		
	{ 
		_qualityColor = "#00c8ec";
		_qualityName = "Item Level 3";
	};
	case 4:		
	{ 
		_qualityColor = "#9F4796";
		_qualityName = "Item Level 4";
	};
	case 5:		
	{ 
		_qualityColor = "#ffb418";
		_qualityName = "Item Level 5";
	};
	case 6:		
	{ 
		_qualityColor = "#ec007a";
		_qualityName = "Item Level 6";
	};						
};
(_dialog displayCtrl 5001) ctrlSetStructuredText parseText format["<t size='1.5' color='%1' font='PuristaMedium' align='left'>%2</t><br/>", _qualityColor, _itemDisplayName];
(_dialog displayCtrl 5002) ctrlSetStructuredText parseText format["<t size='1.125' font='PuristaMedium' align='left'>%1</t><br/><br/>", _qualityName];
_promotedStats = _itemClassName call ExileClient_util_item_getMainStats;
for "_i" from 6000 to 6027 do 
{
	(_dialog displayCtrl _i) ctrlShow false;
};
_controlID = 6000;
{
	(_dialog displayCtrl _controlID) ctrlShow true;
	(_dialog displayCtrl (_controlID + 2)) ctrlSetText (_x select 0);
	(_dialog displayCtrl (_controlID + 2)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 3)) ctrlSetStructuredText parseText (_x select 1);
	(_dialog displayCtrl (_controlID + 3)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 1)) progressSetPosition (_x select 2);
	(_dialog displayCtrl (_controlID + 1)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 1)) ctrlCommit 1;
	_controlID = _controlID + 4;
}
forEach _promotedStats;
_itemDescription = ""; 
if (isText(_itemConfig >> "Library" >> "libTextDesc")) then
{
	_libraryDescription = getText(_itemConfig >> "Library" >> "libTextDesc");
	if (_libraryDescription != "") then
	{
		_itemDescription = _itemDescription + format["<t size='1' font='puristaMedium' align='left'>%1</t><br/><br/>", _libraryDescription];
	};
};
if (_itemDescription == "") then
{
	_itemDescription = getText(_itemConfig >> "descriptionShort");
};
if !(_requiredTools isEqualTo []) then 
{
	_itemDescription = _itemDescription + "<br/><br/>";
	{
		_toolItemClassName = _x;
		_toolItemName = getText(configFile >> "CfgMagazines" >> _toolItemClassName >> "displayName");
		_itemDescription = _itemDescription + format["<t size='1' font='puristaMedium' align='left'>%1</t>", _toolItemName];
		if (_toolItemClassName in _equippedMagazines) then 
		{
			_itemDescription = _itemDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#b2ec00", "EQUIPPED"];
		}
		else 
		{
			_itemDescription = _itemDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#ea0000", "NOT EQUIPPED"];
		};
		_itemDescription = _itemDescription + "<br/>";
	}
	forEach _requiredTools;
};
_descriptionControl = (_dialog displayCtrl 1100);
_descriptionControl ctrlSetStructuredText (parseText _itemDescription);
[_descriptionControl] call BIS_fnc_ctrlFitToTextHeight;
_craftingRecipes = _itemClassName call ExileClient_util_item_getCraftingRecipes;
_craftingRecipesListBox = (_dialog displayCtrl 1400);
_craftingButton = (_dialog displayCtrl 1604);
if !(_craftingRecipes isEqualTo []) then 
{
	_craftingRecipesListBox ctrlShow true;
	_craftingRecipesCaption ctrlShow true;
	lbClear _craftingRecipesListBox;
	{
		_recipeClassName = _x select 0;
		_recipeName = _x select 1;
		_recipePicture = _x select 2;
		_listItemIndex = _craftingRecipesListBox lbAdd _recipeName;
		_craftingRecipesListBox lbSetPicture [_listItemIndex, _recipePicture];
		_craftingRecipesListBox lbSetData [_listItemIndex, _recipeClassName];
	}
	forEach _craftingRecipes;
	_craftingButton ctrlShow true;
	_craftingRecipesListBox ctrlShow true;
}
else 
{
	_craftingRecipesListBox ctrlShow false;
	_craftingButton ctrlShow false;
};
true
