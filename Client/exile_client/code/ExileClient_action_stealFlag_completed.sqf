/**
 * ExileClient_action_stealFlag_completed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flagObject"];
_flagObject = _this;
_flagObject setFlagOwner player;
["flagStolenRequest", [_flagObject]] call ExileClient_system_network_send;