/**
 * ExileClient_gui_baseCamera_event_info_onLoadTime
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control"];
_control = _this select 0;
_control ctrlSetStructuredText parseText format [
"<t align='center' font='PuristaBold' size='1.7'>%1:%2</t>",date select 3,date select 4];
true