/**
 * ExileClient_action_breaching_failed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_explosiveClassName"];
["ErrorTitleOnly", ["Failed!"]] call ExileClient_gui_toaster_addTemplateToast;
_explosiveClassName = ExileCurrentBreachingObject call ExileClient_util_breaching_getBreachingMag;
if(_explosiveClassName isEqualTo -1)exitWith
{
	["ErrorTitleOnly", ["Invalid code path!"]] call ExileClient_gui_toaster_addTemplateToast;
};
[player, (_explosiveClassName select 1)] call ExileClient_util_playerCargo_add;
["breachingCancel",[_this select 0]] call ExileClient_system_network_send;
ExileCurrentBreachingObject = objNull;