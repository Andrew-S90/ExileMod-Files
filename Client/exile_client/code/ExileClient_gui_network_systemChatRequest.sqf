/**
 * ExileClient_gui_network_systemChatRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_line"];
_line = _this select 0;
diag_log format["SystemChat: %1", _line];
systemChat _line;
if (profileNamespace getVariable ["ExileEnableSoundNotifications", false]) then
{
	playsound "AddItemOK";
};
true