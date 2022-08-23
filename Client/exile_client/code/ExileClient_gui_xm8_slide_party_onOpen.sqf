/**
 * ExileClient_gui_xm8_slide_party_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_listBox", "_members", "_groupLeader", "_index", "_kickButton", "_titleControl"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_listBox = _display displayCtrl 4102;
lbClear _listBox;
_group = group player;
_members = units _group;
_groupLeader = leader _group;
{
	if (isPlayer _x) then 
	{
		_index = _listBox lbAdd (name _x);
		_listBox lbSetData [_index, netID _x];
		if (_x isEqualTo _groupLeader) then
		{
			_listBox lbSetPicture [_index, "\a3\ui_f\data\gui\cfg\Ranks\corporal_gs.paa"];
		}
		else 
		{
			_listBox lbSetPicture [_index, "\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"];
		};
		if (_x isEqualTo player) then
		{
			_listBox lbSetColor [_index, [0/255, 178/255, 205/255, 1]];
		}
		else 
		{
			if !(alive _x) then
			{
				_listBox lbSetColor [_index, [225/255, 65/255, 65/255, 1]];
			};
		};
	};
} 
forEach _members;
_kickButton = _display displayCtrl 4104;
_kickButton ctrlEnable false;
_titleControl = _display displayCtrl 4004;
_titleControl ctrlSetStructuredText (parseText (format ["<t align='center' font='RobotoMedium'>%1</t>", (groupID _group)]));
