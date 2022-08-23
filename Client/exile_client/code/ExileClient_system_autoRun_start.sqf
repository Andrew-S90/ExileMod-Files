/**
 * ExileClient_system_autoRun_start
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (call ExileClient_system_autoRun_canAutoRun) then
{
	ExileClientIsAutoRunning = true;
	true call ExileClient_gui_hud_toggleAutoRunIcon;
};
true