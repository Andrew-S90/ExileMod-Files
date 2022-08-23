/**
 * ExileClient_gui_registerClanDialog_event_onRegisterButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_nameInput", "_clanName", "_registrationFee", "_alphabet", "_clanNameLength", "_forbiddenCharacter"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileRegisterClan", displayNull];
_nameInput = _dialog displayCtrl 4003;
_clanName = ctrlText _nameInput;
_registrationFee = getNumber (missionConfigFile >> "CfgClans" >> "registrationFee");
_alphabet = getText (missionConfigFile >> "CfgClans" >> "clanNameAlphabet");
try 
{
	_clanName = _clanName call ExileClient_util_string_trim;
	if ((player getVariable ["ExileMoney", 0]) < _registrationFee) then 
	{
		throw "You do not have enough pop tabs to register a family.";
	};
	_clanNameLength = count _clanName;
	if (_clanNameLength isEqualTo 0) then 
	{
		throw "Please enter a name.";
	};
	if (_clanNameLength < 2) then 
	{
		throw "Name is too short.";
	};
	if (_clanNameLength > 20) then
	{
		throw "Name is longer than 20 letters.";
	};
	_forbiddenCharacter = [_clanName, _alphabet] call ExileClient_util_string_containsForbiddenCharacter;
	if !(_forbiddenCharacter isEqualTo -1) then 
	{
		throw format ["Do not use '%1' in your family name.", _forbiddenCharacter];
	};
	["registerClanRequest", [_clanName]] call ExileClient_system_network_send;
	closeDialog 0;
}
catch 
{
	["ErrorTitleAndText", ["Failed to register family!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true