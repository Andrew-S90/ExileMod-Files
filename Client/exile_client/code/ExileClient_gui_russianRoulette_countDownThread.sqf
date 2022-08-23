/**
 * ExileClient_gui_russianRoulette_countDownThread
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_endTime", "_display", "_timer", "_timeRemaining", "_startTime", "_fadeIn", "_nextFadeTime"];
disableSerialization;
_endTime = _this;
_display = uiNameSpace getVariable ["RscExileRussianRoulette", displayNull];
_timer = _display displayCtrl 4009;
_timer ctrlSetFade 0;
_timer ctrlCommit 0;
_timeRemaining = (_endTime - serverTime) max 0;
_startTime = time;
_fadeIn = false;
_nextFadeTime = time;
while {_timeRemaining > 0} do 
{
	if (_timeRemaining <= 5) then 
	{
		if (time >= _nextFadeTime) then 
		{
			if (_fadeIn) then 
			{
				_timer ctrlSetFade 0;
			}
			else 
			{
				_timer ctrlSetFade 1;
			};
			_fadeIn = !_fadeIn;
			_timer ctrlCommit 0.3;
			_nextFadeTime = time + 0.3;
		};
	};
	_timeRemaining = (_endTime - serverTime) max 0;
	_timer ctrlSetStructuredText (parseText format ["<t align='center' size='0.8' shadow='false' font='OrbitronLight'>%1</t>", [_timeRemaining, "MM:SS"] call BIS_fnc_secondsToString]);
	if (_timeRemaining > 0) then 
	{
		uiSleep 0.1; 
	};
};
if (ExileRussianRouletteCanFire) then 
{
	[] spawn ExileClient_system_russianRoulette_fire;
};
_timer ctrlSetFade 0;
_timer ctrlCommit 0.3;