/**
 * ExileClient_object_vehicle_network_retrieveVehicleResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_response", "_info"];
_response = _this select 0;
_info = _this select 1;
if (_response) then 
{
	["SuccessTitleAndText", ["Vehicle Retrieval", "Your vehicle has been rematerialized"]] call ExileClient_gui_toaster_addTemplateToast;
};
ExileClientIsWaitingForServerTradeResponse = false;