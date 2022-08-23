/**
 * ExileClient_gui_clan_markerAddMenu_event_onChar
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_textControl", "_text"];
_control = uiNamespace getVariable ['RscExileMapCreateMenu', controlNull];
_textControl = _control controlsGroupCtrl 4000;
_text = ctrlText _textControl;
_textControl ctrlSetText (_text + toString [_this select 1]);
call ExileClient_gui_clan_markerAddMenu_addPreviewMarker;