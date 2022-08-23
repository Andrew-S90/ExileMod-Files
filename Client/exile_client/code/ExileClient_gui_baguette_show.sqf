/**
 * ExileClient_gui_baguette_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_description", "_display", "_baguette", "_iconArea", "_icon", "_text", "_textArea", "_textAreaSize"];
disableSerialization;
if !(ExileClientBaguetteAreaVisible) exitWith { false };
_description = _this select 0;
waitUntil {!ExileBaguetteIsVisible};
ExileBaguetteIsVisible = true;
_display = uiNamespace getVariable ["RscExileBaguetteArea", displayNull];
_baguette = _display ctrlCreate ["RscExileBaguette", -1];
_iconArea = _baguette controlsGroupCtrl 5000;
_iconArea ctrlSetFade 1;
_iconArea ctrlCommit 0;
if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") then 
{
	_icon = _baguette controlsGroupCtrl 5003;
	_icon ctrlSetText "exile_assets\texture\mod\icon_escape.paa";
};
_text = _baguette controlsGroupCtrl 5002;
_text ctrlSetText _description;
_textArea = _baguette controlsGroupCtrl 5001;
_textAreaSize = ctrlPosition _textArea;
_textArea ctrlSetPosition [_textAreaSize select 0, _textAreaSize select 1, 0, _textAreaSize select 2];
_textArea ctrlSetFade 1;
_textArea ctrlCommit 0;
_iconArea ctrlSetFade 0;
_iconArea ctrlCommit 0.5;
uiSleep 0.5;
playsound "ZoomIn";
_textArea ctrlSetPosition _textAreaSize;
_textArea ctrlSetFade 0;
_textArea ctrlCommit 0.25;
uiSleep (0.25 + 5);
_textArea ctrlSetPosition [_textAreaSize select 0, _textAreaSize select 1, 0, _textAreaSize select 2];
_textArea ctrlSetFade 1;
_textArea ctrlCommit 0.25;
playsound "ZoomOut";
uiSleep 0.25;
_iconArea ctrlSetFade 1;
_iconArea ctrlCommit 0.5;
uiSleep 0.25;
_textArea ctrlSetPosition _textAreaSize;
_textArea ctrlCommit 0;
ctrlDelete _baguette;
ExileBaguetteIsVisible = false;