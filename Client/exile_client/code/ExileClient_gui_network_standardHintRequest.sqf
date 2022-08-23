/**
 * ExileClient_gui_network_standardHintRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hintText"];
_hintText = _this select 0;
hintSilent parsetext format["%1",_hintText];
true