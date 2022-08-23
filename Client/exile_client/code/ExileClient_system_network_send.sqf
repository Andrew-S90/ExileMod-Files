/**
 * ExileClient_system_network_send
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_messageName", "_messageParameters", "_publicMessage"];
_messageName = _this select 0;
_messageParameters = [_this, 1, [] , [[]] ] call BIS_fnc_param;
_publicMessage = [ExileClientSessionId, _messageName, _messageParameters];
_publicMessage remoteExecCall ["ExileServer_system_network_dispatchIncomingMessage", 2];
_publicMessage = nil;