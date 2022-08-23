/**
 * ExileClient_gui_xm8_slide_slothMachine_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_startButton", "_popTabsLabel", "_jackPotLabel", "_winningsLabel", "_playerMoney", "_playerMoneyString", "_spinCost", "_textureOn", "_jackpotAmount", "_jackpotAmountString"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileXM8", displayNull];
_startButton = _dialog displayCtrl 4141;
_popTabsLabel = _dialog displayCtrl 4142;
_jackPotLabel = _dialog displayCtrl 4143;
_winningsLabel = _dialog displayCtrl 4144;
_playerMoney = player getVariable ["ExileMoney",0];
_playerMoneyString = _playerMoney call ExileClient_util_string_exponentToString;
_popTabsLabel ctrlSetStructuredText (parseText format ["<t  align='center' color='#e14141'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>",_playerMoneyString]);
_spinCost = getNumber (missionConfigFile >> "CfgSlothMachine" >> "spinCost");
_startButton ctrlSetTooltip format ["%1 pt",_spinCost];
if (_playerMoney < _spinCost) then 
{
	_startButton ctrlEnable false;
	_startButton ctrlSetTooltipColorText [0.91, 0, 0, 1];
}
else
{
	_startButton ctrlEnable true;
	_textureOn = "\exile_assets\texture\ui\slothMachine\button_on_ca.paa";
	_startButton ctrlSetText _textureOn;
	_startButton ctrlAddEventHandler ["MouseButtonUp","((findDisplay 24015) displayCtrl 4141) ctrlSetText '\exile_assets\texture\ui\slothMachine\button_click_ca.paa'"];
};
_jackpotAmount = getNumber (missionConfigFile >> "CfgSlothMachine" >> "Jackpot");
_jackpotAmountString = _jackpotAmount call ExileClient_util_string_exponentToString;
_jackPotLabel ctrlSetStructuredText (parseText format["<t  align='center' color='#e14141'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", _jackpotAmountString]);
true