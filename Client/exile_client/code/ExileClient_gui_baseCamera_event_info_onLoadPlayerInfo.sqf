/**
 * ExileClient_gui_baseCamera_event_info_onLoadPlayerInfo
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
_control ctrlSetStructuredText parseText format
[
	"<t align='left' size='0.7' color='#B2B2B2'>Welcome,</t><br/><t align='left' size='1.2'>%1</t><br/>",
	name player
];
