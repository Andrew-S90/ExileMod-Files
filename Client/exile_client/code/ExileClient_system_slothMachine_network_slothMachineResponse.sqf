/**
 * ExileClient_system_slothMachine_network_slothMachineResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_prizeName", "_winnings", "_moneyChange", "_symbols", "_winningsString", "_moneyChangeString", "_dialog", "_startButton", "_backButton", "_winningsLabel", "_gameText1", "_gameText2", "_gameText3", "_displays", "_control", "_image", "_position"];
_prizeName = _this select 0;
_winnings = _this select 1;
_moneyChange = _this select 2;
_symbols = _this select 3;
[_prizeName, _winnings,_moneyChange,_symbols] spawn
{
	disableSerialization;
	_prizeName = _this select 0;
	_winnings = _this select 1;
	_moneyChange = _this select 2;
	_symbols = _this select 3;
	_winningsString = _winnings call ExileClient_util_string_exponentToString;
	_moneyChangeString = _moneyChange call ExileClient_util_string_exponentToString;
	_dialog = uiNameSpace getVariable ["RscExileXM8", displayNull];
	_startButton = _dialog displayCtrl 4141;
	_startButton ctrlEnable false;
	_backButton = _dialog displayCtrl 4148;
	_backButton ctrlEnable false;
	_winningsLabel = _dialog displayCtrl 4144;
	_gameText1 = _dialog displayCtrl 4145;
	_gameText2 = _dialog displayCtrl 4146;
	_gameText3 = _dialog displayCtrl 4147;
	_displays = [_gameText1,_gameText2,_gameText3];
	{
		playSound format["SndExileTwinkleTwisterCharge0%1", _forEachIndex + 1];
		uiSleep 4.5;
		playSound format["SndExileTwinkleTwisterChargeDone0%1", _forEachIndex + 1];
		_control = (_displays select _forEachIndex);
		_image = _x;
		_control ctrlSetText _image;
		_position = ((ctrlPosition _control) select 0);
		_control ctrlSetPosition 
		[
			_position,
			safezoneH + (safezoneY - 1.2)
		];
		_control ctrlSetFade 0;
		_control ctrlShow true;
		_control ctrlCommit 3;
		uiSleep 3;
	}
	forEach _symbols;
	if (_prizeName isEqualTo "") then 
	{
		playSound "SndExileTwinkleTwisterFail";
		_winningsLabel ctrlSetStructuredText (parseText format ["<t  align='center' color='#e14141'>%1</t>",_winningsString]);
		["ErrorTitleAndText", ["You lose!", format ["%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _moneyChangeString]]] call ExileClient_gui_toaster_addTemplateToast;
	}
	else 
	{
		if (_prizeName isEqualTo "Jackpot") then
		{
			playSound "SndExileTwinkleTwisterSuccess";
			_winningsLabel ctrlSetStructuredText (parseText format ["<t  align='center' color='#e14141'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>",_winningsString]);
			["SuccessTitleAndText", ["Jackpot!", format ["+%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _moneyChangeString]]] call ExileClient_gui_toaster_addTemplateToast;
		}
		else
		{
			playSound "SndExileTwinkleTwisterSuccess";
			_winningsLabel ctrlSetStructuredText (parseText format ["<t  align='center' color='#e14141'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>",_winningsString]);
			["SuccessTitleAndText", ["Small prize!", format ["+%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _moneyChangeString]]] call ExileClient_gui_toaster_addTemplateToast;
		};
	};
	uiSleep 5;
	call ExileClient_gui_xm8_slide_slothMachine_reset;
};
true