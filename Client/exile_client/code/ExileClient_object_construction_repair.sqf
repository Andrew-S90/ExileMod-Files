/**
 * ExileClient_object_construction_repair
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_constructionObject", "_repairKitClass"];
_constructionObject = ExileClientInteractionObject;
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
		throw "Y U HAVE TO BE DEAD";
	};
	_repairKitClass = _constructionObject call ExileClient_util_breaching_getRepairMag;
	if(_repairKitClass isEqualTo "")then
	{
		throw "Invalid kit.";
	};
	if!(_repairKitClass in (magazines player))then
	{
		throw "You do not have a repair kit.";
	};
	if(ExileClientPlayerIsInCombat)then
	{
		throw "You cannot repair things while in combat.";
	};
	["RepairConstruction", [_constructionObject,_repairKitClass]] call ExileClient_action_execute;
}
catch
{
	["ErrorTitleAndText", ["Failed to repair!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true