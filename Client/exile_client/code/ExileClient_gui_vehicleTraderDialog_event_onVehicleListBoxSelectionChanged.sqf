/**
 * ExileClient_gui_vehicleTraderDialog_event_onVehicleListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBox", "_index", "_vehicleClass"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_vehicleClass = _listBox lbData _index;
_vehicleClass call ExileClient_gui_vehicleTraderDialog_updateVehicle;
true