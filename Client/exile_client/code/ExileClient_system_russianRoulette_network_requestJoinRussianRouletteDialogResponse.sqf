/**
 * ExileClient_system_russianRoulette_network_requestJoinRussianRouletteDialogResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_gameStatusCode", "_buyInAmount", "_dialog", "_joinButton", "_canJoin", "_buyInValue", "_playerMoney", "_gameStatusValue"];
_gameStatusCode = _this select 0;
_buyInAmount = _this select 1;
createDialog "RscExileJoinRussianRouletteDialog";
_dialog = uiNameSpace getVariable ["RscExileJoinRussianRouletteDialog", displayNull];
_joinButton = _dialog displayCtrl 4002;
_canJoin = true;
_buyInValue = _dialog displayCtrl 4000;
_buyInValue ctrlSetStructuredText (parseText (format ["<t size='1.4'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>", _buyInAmount]));
_playerMoney = player getVariable ["ExileMoney", 0];
if (_playerMoney < _buyInAmount) then 
{
	_canJoin = false;
};
_gameStatusValue = _dialog displayCtrl 4001;
switch (_gameStatusCode) do 
{
	case 0:
	{
		_gameStatusValue ctrlSetStructuredText (parseText "<t size='1.4' color='#b2ec00'>Waiting for players</t>");
	};
	case 1:
	{
		_gameStatusValue ctrlSetStructuredText (parseText "<t size='1.4' color='#ffca12'>Playing</t>");
		_canJoin = false;
	};
	case 2:
	{
		_gameStatusValue ctrlSetStructuredText (parseText "<t size='1.4' color='#ea0000'>Not ready yet</t>");
		_canJoin = false;
	};
};
_joinButton ctrlEnable _canJoin;
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;