/**
 * ExileClient_gui_xm8_slide_territory_event_handleModeration
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_territoryDropDown", "_territorySelected", "_playerListBox", "_index", "_playerUID", "_flagNetID"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_territoryDropDown = _display displayCtrl 4132;
_territorySelected = lbCurSel _territoryDropDown;
_playerListBox = _display displayCtrl 4131;
_index = lbCurSel _playerListBox;
_playerUID = _playerListBox lbData _index;
_flagNetID = _territoryDropDown lbData _territorySelected; 
["moderationTerritoryRequest", [_flagNetID,_playerUID,_this]] call ExileClient_system_network_send;
true