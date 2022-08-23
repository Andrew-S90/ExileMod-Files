/**
 * ExileClient_gui_clan_markerAddMenu_addPreviewMarker
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_iconCombo", "_colorCombo", "_textControl", "_textSizeControl", "_iconSizeControl"];
_control = uiNamespace getVariable ['RscExileMapCreateMenu', controlNull];
if(!isNull _control)then
{
	_iconCombo = _control controlsGroupCtrl 4001;
	_colorCombo = _control controlsGroupCtrl 4002;
	_textControl = _control controlsGroupCtrl 4000;
	_textSizeControl  = _control controlsGroupCtrl 4005;
	_iconSizeControl = _control controlsGroupCtrl 4004;
	ExileClientClanMapIconPreviewArray = 
	[
		_iconCombo lbPictureRight (lbCursel _iconCombo),
		_colorCombo lbColor (lbCursel _colorCombo),
		ExileClientMapPositionClick,
		sliderPosition _iconSizeControl,
		ctrlText _textControl,
		sliderPosition _textSizeControl
	];
};