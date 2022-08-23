/**
 * ExileClient_gui_registerClanDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_registrationFee", "_dialog", "_nameInput", "_configFeeLabel"];
disableSerialization;
try 
{
	if !(ExileClientClanInfo isEqualTo []) then 
	{
		throw "You are already in a family.";
	};
	_registrationFee = getNumber (missionConfigFile >> "CfgClans" >> "registrationFee");
	if ((player getVariable ["ExileMoney", 0]) < _registrationFee) then 
	{
		throw format ["You need %1 pop tabs first.", _registrationFee];
	};
	createDialog "RscExileRegisterClan";
	waitUntil { !isNull findDisplay 24012 };
	_dialog = uiNameSpace getVariable ["RscExileRegisterClan", displayNull];
	_nameInput = _dialog displayCtrl 4003;
	_nameInput ctrlSetText "";	
	_configFeeLabel = _dialog displayCtrl 4000;
	_configFeeLabel ctrlSetStructuredText (parseText (format ["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>", _registrationFee]));
	true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
}
catch 
{
	["ErrorTitleAndText", ["Failed to register family!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true