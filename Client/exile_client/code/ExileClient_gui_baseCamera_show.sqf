/**
 * ExileClient_gui_baseCamera_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_laptop"];
_laptop = _this select 0;
ExileCameraSystemBase = _laptop call ExileClient_util_world_getTerritoryAtPosition;
createDialog "RscExileCameraView";
true