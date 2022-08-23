/**
 * ExileClient_gui_hud_toggle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (_this) then
{
	if !(ExileHudIsVisible) then 
	{
		ExileLayerHUD cutRsc ["RscExileHUD", "PLAIN", 1, false];
		ExileHudIsVisible = true;
	};
	if (ExileHudEventHandle isEqualTo -1) then 
	{
		ExileHudEventHandle = addMissionEventHandler ["Draw3D", { _this call ExileClient_gui_hud_event_onDraw3d; }];
	};
}
else 
{
	if (ExileHudIsVisible) then 
	{
		ExileLayerHUD cutText ["", "PLAIN"]; 
		ExileHudIsVisible = false;
	};
	if !(ExileHudEventHandle isEqualTo -1) then 
	{
		removeMissionEventHandler ["Draw3D", ExileHudEventHandle];
		ExileHudEventHandle = -1;
	};
};