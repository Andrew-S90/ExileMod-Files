/**
 * ExileClient_gui_vehicleCustomsDialog_event_onUnload
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
call ExileClient_gui_modelBox_destroy;
ExileClientMoonLight setLightBrightness 0.75;
true call ExileClient_gui_hud_toggle;