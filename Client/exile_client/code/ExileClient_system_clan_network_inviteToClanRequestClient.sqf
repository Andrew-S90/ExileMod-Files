/**
 * ExileClient_system_clan_network_inviteToClanRequestClient
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
["InfoTitleAndText", ["Incoming family invite!", format ["%1 invited you to join the family '%2'. Use your XM8 family app to respond.", _this select 0, _this select 1]]] call ExileClient_gui_toaster_addTemplateToast;
ExileClientPendingClanInvite = _this;
true