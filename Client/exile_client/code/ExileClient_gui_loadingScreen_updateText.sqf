/**
 * ExileClient_gui_loadingScreen_updateText
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_resource"];
_resource = uiNameSpace getVariable ["RscExileLoadingScreen", displayNull];
if (!isNull _resource) then 
{
	(_resource displayCtrl 66002) ctrlSetStructuredText (parseText format ["<t>%1</t>", _this]);
};
true