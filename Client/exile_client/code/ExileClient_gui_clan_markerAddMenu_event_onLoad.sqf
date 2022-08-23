/**
 * ExileClient_gui_clan_markerAddMenu_event_onLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_colorDropdown", "_index", "_iconDropbox", "_cancleButton"];
_control = _this;
if(!isNull _control)then
{
	_colorDropdown = _control controlsGroupCtrl 4002;
	{
		_index = _colorDropdown lbAdd (_x select 0);
		_colorDropdown lbSetColor [_index,_x select 1];
	}
	forEach ExileClientMapDrawColors;
	_colorDropdown lbSetCurSel -1;
	_iconDropbox = _control controlsGroupCtrl 4001;
	{
		_index = _iconDropbox lbAdd (_x select 0);
		_iconDropbox lbSetPictureRight [_index, _x select 1];
	}	
	forEach ExileClientAllMarkerIcons;
	_iconDropbox lbSetCurSel -1;
	call ExileClient_gui_clan_markerAddMenu_addPreviewMarker;
	_cancleButton = _control controlsGroupCtrl 4006;
	ctrlSetFocus _cancleButton;
};
ExileClientMapKeyUpEH = (findDisplay 12) displayAddEventHandler ["KeyUp",{call ExileClient_gui_clan_markerAddMenu_addPreviewMarker;false}];
true