/**
 * ExileClient_system_clan_network_leaveClanResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_abandoned", "_message"];
_abandoned = _this select 0;
_message =_this select 1;
ExileClientClanInfo = [];
["SuccessTitleOnly", [_message]] call ExileClient_gui_toaster_addTemplateToast;
["apps", 1] call ExileClient_gui_xm8_slide;
true;