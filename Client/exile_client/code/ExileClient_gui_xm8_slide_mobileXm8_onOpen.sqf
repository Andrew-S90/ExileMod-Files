/**
 * ExileClient_gui_xm8_slide_mobileXm8_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_control"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_control = _display displayCtrl 4201;
_control ctrlSetStructuredText
(parseText
	(format 
	[
		"<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>%1</t><br/>SERVER CODE</t>",
		getText(missionConfigFile >> "CfgExileMobileXM8" >> "code")
	])
);