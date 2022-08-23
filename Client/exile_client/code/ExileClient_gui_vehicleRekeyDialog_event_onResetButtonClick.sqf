/**
 * ExileClient_gui_vehicleRekeyDialog_event_onResetButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
["resetCodeDialogRequest",[ExileRekeyVehicleObjectID]] call ExileClient_system_network_send;
closeDialog 0;
true