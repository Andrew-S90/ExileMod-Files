/**
 * ExileClient_gui_xm8_slide_slothMachine_reset
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_backButton", "_gameText1", "_gameText2", "_gameText3", "_winningsLabel", "_popTabsLabel", "_playerMoney", "_playerMoneyString", "_startButton", "_spinCost", "_textureOn"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileXM8", displayNull];
_backButton = _dialog displayCtrl 4148;
_backButton ctrlEnable true;
_gameText1 = _dialog displayCtrl 4145;
_gameText1 ctrlShow false;
_gameText1 ctrlSetText "";
_gameText1 ctrlSetPosition [0.16375,0.16,0.14575,0.2];
_gameText1 ctrlCommit 0;
_gameText2 = _dialog displayCtrl 4146;
_gameText2 ctrlShow false;
_gameText2 ctrlSetText "";
_gameText2 ctrlSetPosition [0.3525,0.16,0.14575,0.2];
_gameText2 ctrlCommit 0;
_gameText3 = _dialog displayCtrl 4147;
_gameText3 ctrlShow false;
_gameText3 ctrlSetText "";
_gameText3 ctrlSetPosition [0.54,0.16,0.14575,0.2];
_gameText3 ctrlCommit 0;
_winningsLabel = _dialog displayCtrl 4144;
_winningsLabel ctrlSetStructuredText (parseText format ["<t  align='center' color='#e14141'>0<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>"]);
_popTabsLabel = _dialog displayCtrl 4142;
_playerMoney = player getVariable ["ExileMoney",0];
_playerMoneyString = _playerMoney call ExileClient_util_string_exponentToString;
_popTabsLabel ctrlSetStructuredText (parseText format ["<t  align='center' color='#e14141'>%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>",_playerMoneyString]);
_startButton = _dialog displayCtrl 4141;
_spinCost = getNumber (missionConfigFile >> "CfgSlothMachine" >> "spinCost");
if (_playerMoney > _spinCost) then 
{
	_startButton ctrlEnable true;
	_textureOn = "\exile_assets\texture\ui\slothMachine\button_on_ca.paa";
	_startButton ctrlSetText _textureOn;
};
true