/**
 * ExileClient_gui_toaster_removeAllToasts
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
{
	ctrlDelete (_x select 0);
}
forEach ExileClientToasts;
ExileClientToasts = [];