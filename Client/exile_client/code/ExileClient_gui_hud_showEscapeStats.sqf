/**
 * ExileClient_gui_hud_showEscapeStats
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_playerName", "_totalWins", "_totalMatches", "_totalKills", "_totalDeaths", "_respect", "_totalLosses", "_winPctAmount", "_avgRespect", "_kdRatio", "_playerNameControl", "_winPctAmountControl", "_winsAmountControl", "_lossesAmountControl", "_kdRatioControl", "_killsAmountControl", "_deathsAmountControl", "_respectAmountControl", "_avgResAmountControl", "_ttlMatchesAmountControl"];
disableSerialization;
_display = uiNamespace getVariable ["RscExileEscapeStats", displayNull];
_playerName = name player;
_totalWins = ExileClientPlayerWins;
_totalMatches = ExileClientPlayerMatches;
_totalKills = ExileClientPlayerKills;
_totalDeaths = ExileClientPlayerDeaths;
_respect = ExileClientPlayerScore;
if (ExileClientPlayerWins > ExileClientPlayerMatches) then {ExileClientPlayerMatches = ExileClientPlayerWins};
_totalLosses = ExileClientPlayerMatches - ExileClientPlayerWins;
if (ExileClientPlayerMatches > 0) then
{
	_winPctAmount = [ExileClientPlayerWins / ExileClientPlayerMatches , 1] call ExileClient_util_math_floor;
	_avgRespect = [ExileClientPlayerScore / ExileClientPlayerMatches , 1] call ExileClient_util_math_floor;
}
else
{
	_winPctAmount = "N/A";
	_avgRespect = "N/A";
};
if (ExileClientPlayerDeaths > 0) then
{
	_kdRatio = [ExileClientPlayerKills / ExileClientPlayerDeaths , 1] call ExileClient_util_math_floor;
}
else
{
	_kdRatio = ExileClientPlayerKills;
};
_playerNameControl = _display displayCtrl 36003;
_playerNameControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _playerName]));
_winPctAmountControl = _display displayCtrl 36006;
_winPctAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _winPctAmount]));
_winsAmountControl = _display displayCtrl 36008;
_winsAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _totalWins]));
_lossesAmountControl = _display displayCtrl 36010;
_lossesAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _totalLosses]));
_kdRatioControl = _display displayCtrl 36012;
_kdRatioControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _kdRatio]));
_killsAmountControl = _display displayCtrl 36014;
_killsAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _totalKills]));
_deathsAmountControl = _display displayCtrl 36016;
_deathsAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _totalDeaths]));
_respectAmountControl = _display displayCtrl 36018;
_respectAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _respect]));
_avgResAmountControl = _display displayCtrl 36020;
_avgResAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _avgRespect]));
_ttlMatchesAmountControl = _display displayCtrl 36022;
_ttlMatchesAmountControl ctrlSetStructuredText (parseText (format ["<t size='1'  shadow='0'>%1</t>", _totalMatches]));