/**
 * ExileClient_gui_russianRoulette_hide
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
call ExileClient_gui_russianRoulette_stopCountDown;
if (ExileRussianRouletteHudVisible) then 
{
	ExileLayerRussianRoulette cutText ["", "PLAIN"]; 
	ExileRussianRouletteHudVisible = false;
};
true call ExileClient_gui_toaster_toggle;
true call ExileClient_gui_baguette_toggle;
