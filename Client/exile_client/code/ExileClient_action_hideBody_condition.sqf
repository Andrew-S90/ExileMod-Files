/**
 * ExileClient_action_hideBody_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_corpse", "_cancel"];
_corpse = _this;
_cancel = "";
try
{
	if (ExileClientPlayerIsInCombat) then
	{
		throw "Cannot hide corpse while in combat";
	};
	if !('Exile_Melee_Shovel' isEqualTo (currentWeapon player)) then
	{
		throw "You need a shovel";
	};
	if !((typeOf _corpse) isEqualTo "Exile_Unit_Player") then 
	{
		throw "You can only bury players";
	};
	if (alive _corpse) then
	{
		throw "You can only bury the dead";
	};
	if !(alive player) then
	{
		throw "You daided!"; 
	};
}
catch
{
	_cancel = _exception;
};
_cancel