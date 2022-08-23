/**
 * ExileClient_gui_clan_markerAddMenu_event_onUnload
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_textSizeControl", "_iconSizeControl", "_colorDropdown", "_iconDropbox"];
_control = uiNamespace getVariable ['RscExileMapCreateMenu', controlNull];
_textSizeControl  = _control controlsGroupCtrl 4005;
_iconSizeControl = _control controlsGroupCtrl 4004;
_textSizeControl sliderSetPosition (getNumber (configfile >> "RscExileMapCreateMenu" >> "controls" >> "TextSizeSlider" >> "sliderPosition"));
_iconSizeControl sliderSetPosition (getNumber (configfile >> "RscExileMapCreateMenu" >> "controls" >> "IconSizeSlider" >> "sliderPosition"));
(_control controlsGroupCtrl 4000) ctrlSetText "";
(_control controlsGroupCtrl 4003) ctrlSetText "";
_colorDropdown = _control controlsGroupCtrl 4002;
_iconDropbox = _control controlsGroupCtrl 4001;
lbClear _colorDropdown;
lbClear _iconDropbox;
ExileClientClanMapIconPreviewArray = [];
(findDisplay 12) displayRemoveEventHandler ["KeyUp",ExileClientMapKeyUpEH];
_control ctrlShow false;