/**
 * ExileClient_gui_interactionMenu_hook
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_menus", "_i", "_menu", "_targetType", "_target", "_showMenu", "_menuItems", "_n", "_menuItem", "_showMenuItem"];
_object = _this;
_menus = missionConfigFile >> "CfgInteractionMenus";
ExileClientInteractionObject = _object;
ExileClientInteractionLastHookTime = time;
for "_i" from 0 to count(_menus) - 1 do 
{
	_menu = _menus select _i;
	_targetType = getNumber(_menu >> "targetType");
	_target = getText(_menu >> "target");
	_showMenu = false;
	if (_targetType == 2) then 
	{
		if (_object isKindOf _target) then
		{
			_showMenu = true;
			if (_target isEqualTo "Exile_Animal_Abstract") then 
			{
				_object = player;
			};
		};
	}
	else 
	{
		if ([_object, _target] call ExileClient_util_model_isInteraction) then
		{
			_showMenu = true;
		};
	};
	if (_showMenu) then
	{
		_menuItems = _menu >> "Actions";
		for "_n" from 0 to count(_menuItems) - 1 do 
		{
			_menuItem = _menuItems select _n;
			_showMenuItem = call compile (getText (_menuItem >> "condition"));
			if (_showMenuItem) then
			{
				ExileClientInteractionHandles pushBack (_object addAction 
				[
					getText(_menuItem >> "title"), 
					getText(_menuItem >> "action"), 
					nil, 
					getNumber(_menuItem >> "priority"), 
					getNumber(_menuItem >> "showWindow") isEqualTo 1 
				]);
			};
		};
	};
};