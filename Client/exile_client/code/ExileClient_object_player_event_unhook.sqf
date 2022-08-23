/**
 * ExileClient_object_player_event_unhook
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
player removeAllEventHandlers "Killed";
player removeAllEventHandlers "Fired";
player removeAllEventHandlers "FiredNear";
player removeAllEventHandlers "Explosion";
player removeAllEventHandlers "HandleDamage";
player removeAllEventHandlers "Put";
player removeAllEventHandlers "Take";
player removeAllEventHandlers "InventoryOpened";
player removeAllEventHandlers "InventoryClosed";