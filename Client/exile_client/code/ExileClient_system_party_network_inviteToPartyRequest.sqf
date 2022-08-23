/**
 * ExileClient_system_party_network_inviteToPartyRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_invitorNetID", "_invitor", "_groupName"];
_invitorNetID = _this select 0;
_invitor = objectFromNetId _invitorNetID;
_group = group _invitor; 
_groupName = groupID _group;
if (ExileClientPartyID isEqualTo -1) then
{
	["InfoTitleAndText", ["Incoming party invite!", format ["You have been invited to join the party '%1'. Use your XM8 party app to respond.", _groupName]]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientPendingPartyInvitionGroup = _group;
};