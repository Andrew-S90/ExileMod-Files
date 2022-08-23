/**
 * ExileClient_gui_xm8_showClanSlide
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if(ExileClientPendingClanInvite isEqualTo [])then
{
	if(ExileClientClanInfo isEqualTo [])then
	{
		['Register a family or join one ;)','I get it dude!'] call ExileClient_gui_xm8_showWarning;
	}
	else 
	{
		['clan', 0] call ExileClient_gui_xm8_slide;
	};
}
else
{
	[
		format ["%1 invited you to join family: %2",ExileClientPendingClanInvite select 0,ExileClientPendingClanInvite select 1],
		"Accept",
		"Reject"
	] call ExileClient_gui_xm8_showConfirm;
	waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
	["inviteToClanRequestClientResponse",[ExileClientXM8ConfirmResult]] call ExileClient_system_network_send;
};
