/**
 * ExileClient_object_fire_inflame
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_fire"];
_fire = _this;
if ("Exile_Item_Matches" in (magazines player)) then
{
	[player, "Exile_Item_Matches", -1] call ExileClient_util_gear_repackMagazines;
	_fire inflame true;
}
else 
{
	["ErrorTitleAndText", ["No fire for you!", "You need matches to light a fire. Or a dragon."]] call ExileClient_gui_toaster_addTemplateToast;
};
true