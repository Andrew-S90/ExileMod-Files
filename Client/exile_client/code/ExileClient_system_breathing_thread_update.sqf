/**
 * ExileClient_system_breathing_thread_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (diag_tickTime >= ExileNextAutoBreathAt) then 
{
	call ExileClient_system_breathing_breathe;
	ExileNextAutoBreathAt = diag_tickTime + (2.2 + random 0.6);
};