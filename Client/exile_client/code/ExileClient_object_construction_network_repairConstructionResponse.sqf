/**
 * ExileClient_object_construction_network_repairConstructionResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_repairKitClass"];
_repairKitClass = _this select 0;
[player, _repairKitClass] call ExileClient_util_playerCargo_remove;
["SuccessTitleOnly", ["Construction repaired!"]] call ExileClient_gui_toaster_addTemplateToast;
true