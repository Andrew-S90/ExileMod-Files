/**
 * ExileClient_object_bush_attachGreenBush
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
player removeItem "Exile_Item_BushKit_Green";
ExileClientIsInBush = true;
player allowSprint false;
ExileClientBush = "Exile_Plant_GreenBush" createVehicle (getPos player);
ExileClientBush attachTo [player, [0.7, 0.5, 0.5]];