/**
 * ExileClient_action_repairConstruction_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_constructionObject", "_repairKitClass", "_resault"];
_constructionObject = _this select 0;
_repairKitClass = _this select 1;
_resault = "";
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
	if!(_repairKitClass in (magazines player))then
	{
		throw "You dont have a repair kit";
	};
	if(ExileClientPlayerIsInCombat)then
	{
		throw "Cant repair in combat";
	};
}
catch
{
	_resault = _exception;
};
_resault