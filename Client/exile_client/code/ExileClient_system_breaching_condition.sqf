/**
 * ExileClient_system_breaching_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_canPlant", "_explosiveClassName", "_territory"];
_canPlant = false;
try
{
	if!(alive player)then
	{
		throw "";
	};
	_explosiveClassName = ExileClientInteractionObject call ExileClient_util_breaching_getBreachingMag;
	if(_explosiveClassName isEqualTo -1)then
	{
		throw "";
	};
	if((_explosiveClassName select 0) isEqualTo 0)then
	{
		if!((_explosiveClassName select 1) in (magazines player))then
		{
			throw "";
		};
	}
	else
	{
		if!((backpack player) isEqualTo (_explosiveClassName select 1))then
		{
			throw "";
		};
	};
	_territory = ExileClientInteractionObject call ExileClient_util_world_getTerritoryAtPosition;
	if(isNull _territory)then
	{
		throw "";
	};
	if((getPlayerUID player) in (_territory getVariable ["ExileTerritoryBuildRights",[]]))then
	{
		throw "";
	};
	if(ExileClientInteractionObject getVariable ["ExileBreaching",false])then
	{
		throw "";
	};
	_canPlant = true;
}catch{};
_canPlant