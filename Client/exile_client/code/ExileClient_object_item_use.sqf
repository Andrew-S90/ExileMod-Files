/**
 * ExileClient_object_item_use
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_itemClassName", "_usingConfig", "_chance", "_dice", "_successFunction", "_successNotification", "_successCode"];
_itemClassName = _this select 0;
if !(_itemClassName in (magazines player)) exitWith {false};
if( isClass(configFile >> "CfgMagazines" >> _itemClassName >> "Interactions" >> "Using") ) then
{
	_usingConfig = configFile >> "CfgMagazines" >> _itemClassName >> "Interactions" >> "Using";
	_chance = getNumber (_usingConfig >> "chance");
	_dice = floor (random 100);
	if (_dice <= _chance) then
	{
		_successFunction = getText (_usingConfig >> "successFunction");
		_successNotification = getText (_usingConfig >> "successNotification");
		_successCode = format["[] call %1", _successFunction];
		[] call compile _successCode;
		["SuccessTitleOnly", [_successNotification]] call ExileClient_gui_toaster_addTemplateToast;
	}
	else 
	{
		["ErrorTitleAndText", ["Failed!", "Please try again."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	player removeItem _itemClassName;
};
true