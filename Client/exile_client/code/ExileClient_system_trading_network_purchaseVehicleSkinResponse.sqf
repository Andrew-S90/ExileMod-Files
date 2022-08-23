/**
 * ExileClient_system_trading_network_purchaseVehicleSkinResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_responseCode", "_salesPrice"];
_responseCode = _this select 0;
_salesPrice = _this select 1;
if (_responseCode isEqualTo 0) then
{
	["SuccessTitleAndText", ["Vehicle skin purchased!", format ["+%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _salesPrice]]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	systemChat format["Failed to purchase vehicle skin: %1", _responseCode];
};