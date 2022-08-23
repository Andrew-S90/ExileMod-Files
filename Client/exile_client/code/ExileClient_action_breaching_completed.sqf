/**
 * ExileClient_action_breaching_completed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
["SuccessTitleAndText", ["Charge planted!", "Use your XM8 'Boom' app to detonate the breaching charge."]] call ExileClient_gui_toaster_addTemplateToast;
["chargePlanted",[]] call ExileClient_system_network_send;