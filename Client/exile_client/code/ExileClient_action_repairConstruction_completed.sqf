/**
 * ExileClient_action_repairConstruction_completed
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_constructionObject", "_repairKitClass"];
_constructionObject = _this select 0;
_repairKitClass = _this select 1;
try
{
	if(isNull _constructionObject)then
	{
		throw "Construction null";
	};
	if(isNull player)then
	{
		throw "ARMAgedon";
	};
	if!(alive player)then
	{
		throw "Really? Why the hell are you dead?";
	};
	if!(_repairKitClass in (magazines player))then
	{
		throw "You are missing a required repair kit.";
	};
	if(ExileClientPlayerIsInCombat)then
	{
		throw "You cannot repair things while in combat.";
	};
	["repairConstructionRequest",[_constructionObject]] call ExileClient_system_network_send;
}
catch
{
	["ErrorTitleAndText", ["Failed to repair!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true