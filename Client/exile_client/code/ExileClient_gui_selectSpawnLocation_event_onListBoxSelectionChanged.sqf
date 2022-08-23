/**
 * ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBoxControl", "_listBoxControlIndex", "_display", "_spawnButton"];
disableSerialization;
_listBoxControl = _this select 0;
_listBoxControlIndex = _this select 1;
_display = findDisplay 24002;
ExileClientSelectedSpawnLocationMarkerName = _listBoxControl lbData _listBoxControlIndex;
_spawnButton = _display displayCtrl 24003;
_spawnButton ctrlEnable true;
if !((_listBoxControl lbText _listBoxControlIndex) == "Random") then 
{
	ExileClientSelectedSpawnLocationMarkerName call ExileClient_gui_selectSpawnLocation_zoomToMarker;
};
true