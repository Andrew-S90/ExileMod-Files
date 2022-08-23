/**
 * ExileClient_object_player_event_onFiredNear
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_distance", "_weapon", "_putInCombat"];
_distance = _this select 2;
_weapon = _this select 3;
_putInCombat = true;
if (_weapon in ["Put", "Throw", "Exile_Melee_Axe", "Exile_Melee_SledgeHammer", "Exile_Melee_Shovel"]) then
{
	_putInCombat = false;
};
if (ExilePlayerInSafezone) then
{
	_putInCombat = false;
};
if (_putInCombat) then
{
	ExileClientPlayerIsInCombat = true;
	ExileClientPlayerLastCombatAt = diag_tickTime;
	true call ExileClient_gui_hud_toggleCombatIcon;
};
true