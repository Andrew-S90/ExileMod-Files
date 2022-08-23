/**
 * ExileClient_gui_handle_animButton_onButtonUp
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_displayName", "_controlName", "_texture"];
_control = (_this select 0) select 0;
_displayName = _this select 1;
_controlName = _this select 2;
_texture = getText(configFile >> _displayName >> "controls" >> _controlName >> "buttonPictures" >> "none");
_control ctrlSetText _texture;
ExileGuiControlClick = false;
true