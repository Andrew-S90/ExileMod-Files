/**
 * ExileClient_gui_hud_renderEscapeHUD
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_alivePlayers", "_playerCountControl", "_countDownText", "_countDownTimeLeft", "_displayTrader", "_countDownControl"];
disableSerialization;
_display = uiNamespace getVariable ["RscExileEscapeHUD", displayNull];
_alivePlayers = {alive _x} count allPlayers;
_playerCountControl = _display displayCtrl 35002;
_playerCountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _alivePlayers]));
_countDownText = "LOBBY";
if !(isNil "ExileEscapeGameEndAt") then 
{
	_countDownTimeLeft = (ExileEscapeGameEndAt - serverTime) max 0;
	_countDownText = [_countDownTimeLeft, "MM:SS"] call BIS_fnc_secondsToString;
	if (uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) then 
	{
		_displayTrader = findDisplay 24007;
		_displayTrader closeDisplay 2;
	};
}
else
{
	if !(isNil "ExileEscapeGameStartAt") then
	{
		_countDownTimeLeft = (ExileEscapeGameStartAt - serverTime) max 0;
		_countDownText = [_countDownTimeLeft, "MM:SS"] call BIS_fnc_secondsToString;
	};
};
_countDownControl = _display displayCtrl 35005;
_countDownControl ctrlSetStructuredText (parseText (format ["<t size='1' shadow='0'>%1</t>", _countDownText]));