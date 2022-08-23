/**
 * ExileClient_system_breaching_detonate
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if(alive player)then
{
	if(diag_tickTime > ExileClientLastBreach + 10)then
	{
		ExileClientLastBreach = diag_tickTime;
		["detonateAllCharges",[]] call ExileClient_system_network_send;
	};	
}
else
{
	["ErrorTitleOnly", ["You are too dead for this!"]] call ExileClient_gui_toaster_addTemplateToast;
};
