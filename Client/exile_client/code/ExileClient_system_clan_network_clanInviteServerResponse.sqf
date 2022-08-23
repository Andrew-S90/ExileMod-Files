/**
 * ExileClient_system_clan_network_clanInviteServerResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientPendingClanInvite = [];
if(_this select 0)then
{
	["SuccessTitleAndText", ["Welcome!", "These inmates are your new family now."]] call ExileClient_gui_toaster_addTemplateToast;
}
else
{
	["InfoTitleAndText", ["Not today!", "You have declined the family invite."]] call ExileClient_gui_toaster_addTemplateToast;
};
true