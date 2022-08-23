/**
 * ExileClient_object_construction_lockAddShow
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
isNumber(configFile >> "CfgVehicles" >> (typeOf ExileClientInteractionObject) >> "exileIsDoor")
&&
((ExileClientInteractionObject getVariable ["ExileIsLocked",""]) isEqualTo "")
&&
("Exile_Item_Codelock" in (magazines player))