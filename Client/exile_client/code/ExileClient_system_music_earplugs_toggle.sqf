/**
 * ExileClient_system_music_earplugs_toggle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (alive player) then
{
	if (ExileClientEarplugsInserted) then
	{
		2 fadeSound 1;
		false call ExileClient_gui_hud_toggleEarplugsIcon;
	}
	else
	{
		2 fadeSound 0.1;
		true call ExileClient_gui_hud_toggleEarplugsIcon;
	};
	ExileClientEarplugsInserted = !ExileClientEarplugsInserted;
};
true