/**
 * ExileClient_gui_baseCamera_event_info_onLoadInfo
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
_control ctrlSetStructuredText parseText 
"<t align='center' font='PuristaBold' size='1.2'>NO CAMERA SELECTED</t><br/>
<t align='center' font='PuristaBold' size='0.7'>LOOK UP</t>";
true