/**
 * ExileClient_action_repairConstruction_duration
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_duration"];
_duration = 99999999; 
switch ((_this select 0) call ExileClient_util_breaching_getRepairMag) do
{ 
	case "Exile_Item_RepairKitWood" : { _duration = 60}; 
	case "Exile_Item_RepairKitMetal" : {_duration = 120};
	case "Exile_Item_RepairKitConcrete" : {_duration = 180}; 
};
_duration