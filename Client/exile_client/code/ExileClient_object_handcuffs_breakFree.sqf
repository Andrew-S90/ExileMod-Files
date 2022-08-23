/**
 * ExileClient_object_handcuffs_breakFree
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
try 
{
	if !(ExileClientIsHandcuffed) then
	{
		throw "You are not handcuffed!"; 
	};
	if !(isNull ExileClientHostageTaker) then 
	{
		if ((player distance ExileClientHostageTaker) < 20) then
		{
			throw "Your hostage taker is nearby!"; 
		};
	};
	if !(player call ExileClient_object_handcuffs_hasFreeItems) then
	{
		throw "Missing tools!"; 
	};
	["breakFreeRequest", []] call ExileClient_system_network_send;
}
catch 
{
	["ErrorTitleOnly", [_exception]] call ExileClient_gui_toaster_addTemplateToast;
};
