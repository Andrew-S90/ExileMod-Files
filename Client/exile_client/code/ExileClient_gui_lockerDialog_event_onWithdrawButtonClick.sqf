/**
 * ExileClient_gui_lockerDialog_event_onWithdrawButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_amountInput", "_alphabet", "_forbiddenCharacter", "_lockerAmount", "_withdrawAmount"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileLockerDialog", displayNull];
_amountInput = ctrlText (_display displayCtrl 4005);
try
{
	if((count _amountInput) isEqualTo 0) then 
	{
		throw "Please enter an amount.";
	};
	_alphabet = getText (missionConfigFile >> "CfgLocker" >> "numbersOnly");
	_forbiddenCharacter = [_amountInput, _alphabet] call ExileClient_util_string_containsForbiddenCharacter;
	if !(_forbiddenCharacter isEqualTo -1) then 
	{
		throw "Please enter only numbers.";
	};
	_lockerAmount = player getVariable ["ExileLocker",0];
	_withdrawAmount = ceil (abs (parseNumber _amountInput));
	if (_lockerAmount < _withdrawAmount) then
	{
		throw "Your locker does not contain enough pop tabs";
	};
	["lockerWithdrawRequest", [_amountInput]] call ExileClient_system_network_send;
}
catch
{
	["ErrorTitleAndText", ["Failed to withdraw!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true