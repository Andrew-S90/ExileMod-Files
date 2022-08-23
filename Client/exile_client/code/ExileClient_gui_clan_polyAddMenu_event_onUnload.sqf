/**
 * ExileClient_gui_clan_polyAddMenu_event_onUnload
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_createMenu", "_colorDropdown", "_buttonControl", "_statusControl", "_linesLabel", "_linesStatus"];
_createMenu = uiNamespace getVariable ['RscExileMapCreatePoly', controlNull];
_colorDropdown = _createMenu controlsGroupCtrl 4000;
_buttonControl = _createMenu controlsGroupCtrl 4002;
_statusControl = _createMenu controlsGroupCtrl 4001;
_linesLabel = _createMenu controlsGroupCtrl 4004;
_linesStatus = _createMenu controlsGroupCtrl 4003;
lbClear _colorDropdown;
_linesLabel ctrlSetText "Lines:";
_linesLabel ctrlCommit 0;
_linesStatus progressSetPosition 0;
_linesStatus ctrlCommit 0;
_buttonControl ctrlEnable false;
_buttonControl ctrlCommit 0;
_colorDropdown ctrlEnable true;
_colorDropdown ctrlCommit 0;
_createMenu ctrlShow false;
ExileClientMapPolyMode = false;
ExileClientClanMapLineRenderArray = [];
ExileClientLineLastRenderPos = [0,0,0];
ExileClientClanMapLineCompleated = false;