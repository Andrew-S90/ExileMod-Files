/**
 * ExileClient_gui_xm8_slide_extraApps_onClose
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display"];
[] spawn 
{
	uiSleep 0.25;
	disableSerialization;
	_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
	{
		ctrlDelete _x;
	}
	forEach (_display getVariable ["ExileExtraApps", []]);
	_display setVariable ["ExileExtraApps", []];
};