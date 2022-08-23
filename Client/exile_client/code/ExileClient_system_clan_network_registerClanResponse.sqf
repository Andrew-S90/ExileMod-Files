/**
 * ExileClient_system_clan_network_registerClanResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_responseCode", "_registrationFee"];
_responseCode = _this select 0;
if (_responseCode isEqualTo 0) then
{
	_registrationFee = _this select 1;
	ExileClientClanInfo = _this select 2;
	["SuccessTitleAndText", ["Family registered!", format ["-%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _registrationFee]]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	if(_responseCode isEqualTo 5)then
	{
		player setDamage 5;
		Exiled = "I have tried to RE code and I am retarded!";
		publicVariableServer "Exiled";
	};
};
true