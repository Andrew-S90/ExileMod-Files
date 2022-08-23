/**
 * ExileClient_gui_inventory_event_onTakePopTabsInputKeyUp
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_keyCode", "_stopPropagation"];
_keyCode = _this select 1;
_stopPropagation = false;
if (_keyCode in [0x1C, 0x9C]) then 
{
	call ExileClient_gui_inventory_event_onTakePopTabsButtonClick;
	_stopPropagation = true;
};
_stopPropagation