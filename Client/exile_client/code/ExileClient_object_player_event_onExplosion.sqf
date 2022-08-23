/**
 * ExileClient_object_player_event_onExplosion
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (alive player) then
{
	if !(ExilePlayerInSafezone) then
	{
		ExileClientPlayerIsInCombat = true;
		ExileClientPlayerLastCombatAt = diag_tickTime;
		true call ExileClient_gui_hud_toggleCombatIcon;
	};
	0 fadeSound 0;
	playSound ["combat_deafness", true]; 
	15 fadeSound 1;
};
true