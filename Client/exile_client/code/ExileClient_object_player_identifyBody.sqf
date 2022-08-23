/**
 * ExileClient_object_player_identifyBody
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_target"];
_target = _this select 0;
if !(alive _target) then 
{
	_name = _target getVariable ["ExileName", -1];
	if !(_name isEqualTo -1) then 
	{
		["InfoTitleOnly", [format ["Body identified as: %1", _name]]] call ExileClient_gui_toaster_addTemplateToast;
	};
};