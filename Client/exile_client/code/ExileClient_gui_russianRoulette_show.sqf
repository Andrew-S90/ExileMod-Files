/**
 * ExileClient_gui_russianRoulette_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_hint"];
disableSerialization;
false call ExileClient_gui_hud_toggle;
call ExileClient_gui_toaster_removeAllToasts;
false call ExileClient_gui_toaster_toggle;
false call ExileClient_gui_baguette_toggle;
ExileLayerRussianRoulette cutRsc ["RscExileRussianRoulette", "PLAIN", 1, false];
ExileRussianRouletteHudVisible = true;
_display = uiNameSpace getVariable ["RscExileRussianRoulette", displayNull];
_hint = _display displayCtrl 4003;
_hint ctrlShow false;
_hint ctrlCommit 0;
