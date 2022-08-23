/**
 * ExileClient_gui_clan_markerAddMenu_event_onAddButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_iconCombo", "_colorCombo", "_textControl", "_textSizeControl", "_iconSizeControl", "_ctrlText", "_marker", "_maxChars", "_alphabet", "_forbiddenCharacter", "_color", "_maxAmountOfMarkers", "_renderArray"];
_control = uiNamespace getVariable ['RscExileMapCreateMenu', controlNull];
if!(isNull _control)then
{
	_iconCombo = _control controlsGroupCtrl 4001;
	_colorCombo = _control controlsGroupCtrl 4002;
	_textControl = _control controlsGroupCtrl 4000;
	_textSizeControl  = _control controlsGroupCtrl 4005;
	_iconSizeControl = _control controlsGroupCtrl 4004;
	_ctrlText = ctrlText _textControl;
	_marker = _iconCombo lbPictureRight (lbCursel _iconCombo);
	if((_ctrlText isEqualTo "") && ((_marker isEqualTo "a3\ui_f\data\map\markers\system\dummy_ca.paa") || {_marker isEqualTo ""}))exitWith{};
	if(ExileClientMapPositionClick isEqualTo [0,0])exitWith{};
	try
	{
		_maxChars = getNumber (missionConfigFile >> "CfgClans" >> "maximumIconText");
		if(count _ctrlText > _maxChars)then
		{
			throw format ["Your marker text is too long. It can only be %1 characters in length.",_maxChars];
		};
		_alphabet = getText (missionConfigFile >> "CfgClans" >> "clanNameAlphabet");
		_forbiddenCharacter = [_ctrlText, _alphabet] call ExileClient_util_string_containsForbiddenCharacter;
		if !(_forbiddenCharacter isEqualTo -1) then 
		{
			throw "Your marker text contains invalid characters. Please try again.";
		};
		_color = _colorCombo lbColor (lbCursel _colorCombo);
		if!((count _color) isEqualTo 4)then
		{
			throw "Something weird is going on. Please try again.";
		};
		if!((count ExileClientMapPositionClick) isEqualTo 2)then
		{
			throw "Something fishy is going on. Please try again.";
		};
		_maxAmountOfMarkers = getNumber(missionConfigFile >> "CfgClans" >> "maximumIcons");
		if((count (ExileClientClanInfo select 3)) >= _maxAmountOfMarkers)then
		{
			throw "You have reached the maximum number of markers allowed.";
		};
		_renderArray = 
		[
			_marker,
			_color,
			ExileClientMapPositionClick,
			sliderPosition _iconSizeControl,
			_ctrlText,
			sliderPosition _textSizeControl
		];
		["addMarkerRequest", _renderArray] call ExileClient_system_network_send;
		_control call ExileClient_gui_clan_markerAddMenu_event_onUnload;
	}
	catch
	{
		["ErrorTitleAndText", ["Failed to add marker!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
	};
};
true