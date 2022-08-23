/**
 * ExileClient_gui_hud_event_hook
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
[] spawn
{
	waituntil { !(IsNull findDisplay 46) };
	(findDisplay 46) displayAddEventHandler ["KeyDown", { _this call ExileClient_gui_hud_event_onKeyDown; }];
	(findDisplay 46) displayAddEventHandler ["KeyUp", { _this call ExileClient_gui_hud_event_onKeyUp; }];
	waituntil { !(IsNull findDisplay 12)};
	(findDisplay 12) displayAddEventHandler ["KeyDown",{_this call ExileClient_gui_map_event_onKeyDown;}];
	true
};
ExileHudEventHandle = addMissionEventHandler ["Draw3D", { _this call ExileClient_gui_hud_event_onDraw3d; }];
ExileHudIsVisible = true;
true