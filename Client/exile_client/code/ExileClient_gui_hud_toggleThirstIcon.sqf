/**
 * ExileClient_gui_hud_toggleThirstIcon
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_icon"];
disableSerialization;
_display = uiNamespace getVariable "RscExileHUD";
_icon = _display displayCtrl 1007;
_icon ctrlShow _this;