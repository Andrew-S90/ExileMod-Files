/**
 * ExileClient_gui_clan_polyAddMenu_event_onLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_colorDropdown", "_index", "_statusControl", "_buttonControl", "_linesStatus", "_maxLines", "_text", "_linesLabel", "_cancleButton"];
_control = _this;
if(!isNull _control)then
{
	_colorDropdown = _control controlsGroupCtrl 4000;
	{
		_index = _colorDropdown lbAdd (_x select 0);
		_colorDropdown lbSetColor [_index,_x select 1];
	}
	forEach ExileClientMapDrawColors;
	_colorDropdown lbSetCurSel -1;
	_statusControl = _control controlsGroupCtrl 4001;
	_statusControl ctrlSetBackGroundColor [221/255, 38/255, 38/255, 1];
	_statusControl ctrlCommit 0;
	_buttonControl = _control controlsGroupCtrl 4002;
	_buttonControl ctrlEnable false;
	_buttonControl ctrlCommit 0;
	_linesStatus = _control controlsGroupCtrl 4003;
	_linesStatus progressSetPosition 0;
	_linesStatus ctrlCommit 0;
	_maxLines = getNumber(missionConfigFile >> "CfgClans" >> "maximumPolyNode");
	_text = format ["0/%1",_maxLines];
	_linesLabel = _control controlsGroupCtrl 4004;
	_linesStatus ctrlSetText _text;
	_linesStatus ctrlCommit 0;
	_cancleButton = _control controlsGroupCtrl 4005;
	ctrlSetFocus _cancleButton;
};
ExileClientMapPolyMode = true;