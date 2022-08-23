/**
 * ExileClient_action_execute
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_actionName", "_parameters", "_progress", "_actionConfig", "_duration", "_durationFunction", "_failChance", "_failChanceFunction", "_animation", "_animationType", "_conditionFunction", "_abortInCombatMode", "_repeatingCheckFunction", "_startTime", "_sleepDuration", "_failAt", "_errorMessage", "_keyDownHandle", "_mouseButtonDownHandle", "_display", "_label", "_progressBarBackground", "_progressBarMaxSize", "_progressBar", "_repeatingCheck", "_function", "_progressBarColor"];
disableSerialization;
if (ExileClientActionDelayShown) exitWith { false };
ExileClientActionDelayShown = true;
ExileClientActionDelayAbort = false;
_actionName = _this select 0;
_parameters = _this select 1;
_progress = 0;
_actionConfig = configFile >> "CfgExileDelayedActions" >> _actionName;
_duration = getNumber (_actionConfig >> "duration");
_durationFunction = getText (_actionConfig >> "durationFunction");
_failChance = getNumber (_actionConfig >> "failChance");
_failChanceFunction = getText (_actionConfig >> "failChanceFunction");
_animation = getText (_actionConfig >> "animation");
_animationType = getText (_actionConfig >> "animationType");
_conditionFunction = getText (_actionConfig >> "conditionFunction");
_abortInCombatMode = (getText (_actionConfig >> "abortInCombatMode")) isEqualTo 1;
_repeatingCheckFunction = getText (_actionConfig >> "repeatingCheckFunction");
_startTime = diag_tickTime;
_sleepDuration = _duration / 100;
_failAt = diag_tickTime + 99999;
_errorMessage = "";
if !(_conditionFunction isEqualTo "") then 
{
	_errorMessage = _parameters call (missionNameSpace getVariable [_conditionFunction,{}]);
};
if !(_errorMessage isEqualTo "") exitWith
{
	ExileClientActionDelayShown = false;
	["ErrorTitleAndText", ["Whoops!", _errorMessage]] call ExileClient_gui_toaster_addTemplateToast;
};
if !(_durationFunction isEqualTo "") then 
{
    _duration = _parameters call (missionNameSpace getVariable [_durationFunction,{}]);
};
if !(_failChanceFunction isEqualTo "") then 
{
    _failChance = _parameters call (missionNameSpace getVariable [_failChanceFunction,{}]);
};
if ((floor (random 100)) < _failChance) then 
{
	_failAt = _startTime + _duration * (0.5 + (random 0.5));
};
("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileActionProgress", "PLAIN", 1, false];
_keyDownHandle = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call ExileClient_action_event_onKeyDown"];
_mouseButtonDownHandle = (findDisplay 46) displayAddEventHandler ["MouseButtonDown","_this call ExileClient_action_event_onMouseButtonDown"];
_display = uiNamespace getVariable "RscExileActionProgress";   
_label = _display displayCtrl 4002;
_label ctrlSetText "0%";
_progressBarBackground = _display displayCtrl 4001;  
_progressBarMaxSize = ctrlPosition _progressBarBackground;
_progressBar = _display displayCtrl 4000;  
_progressBar ctrlSetPosition [_progressBarMaxSize select 0, _progressBarMaxSize select 1, 0, _progressBarMaxSize select 3];
_progressBar ctrlSetBackgroundColor [0, 0.78, 0.93, 1];
_progressBar ctrlCommit 0;
_progressBar ctrlSetPosition _progressBarMaxSize; 
_progressBar ctrlCommit _duration;
if !(_animation isEqualTo "") then 
{
	if (_animationType isEqualTo "switchMove") then 
	{
		player switchMove _animation;
		["switchMoveRequest", [netId player, _animation]] call ExileClient_system_network_send;
	}
	else 
	{
		player playMoveNow _animation;
	};
};
try
{
	while {_progress < 1} do 
	{
		if (diag_tickTime >= _failAt) then 
		{
			throw 1;
		};
		if (ExileClientActionDelayAbort) then 
		{
			throw 2;
		};
		if (ExileClientPlayerIsInCombat) then 
		{
			if (_abortInCombatMode) then 
			{
				throw 2;
			};
		};
		if !(alive player) then 
		{
			throw 2;
		};
		if !(_repeatingCheckFunction isEqualTo "") then 
		{
			_repeatingCheck = _parameters call (missionNameSpace getVariable [_repeatingCheckFunction,{}]);
			if !(_repeatingCheck) then
			{
				throw 2;
			};
		};
		uiSleep _sleepDuration; 
		_progress = ((diag_tickTime - _startTime) / _duration) min 1;
		_label ctrlSetText format["%1%2", round (_progress * 100), "%"];
	};
	_errorMessage = "";
	if !(_conditionFunction isEqualTo "") then 
	{
		_errorMessage = _parameters call (missionNameSpace getVariable [_conditionFunction,{}]);
	};
	if !(_errorMessage isEqualTo "") exitWith
	{
		["ErrorTitleAndText", ["Whoops!", _errorMessage]] call ExileClient_gui_toaster_addTemplateToast;
		throw 2;
	};
	throw 0;
}
catch
{
	_function = "";
	_progressBarColor = [];
	switch (_exception) do 
	{
		case 0: 	
		{ 
			_function = getText (_actionConfig >> "completedFunction"); 
			_progressBarColor = [0.7, 0.93, 0, 1];
		};
		case 2: 	
		{ 
			_function = getText (_actionConfig >> "abortedFunction"); 
			_progressBarColor = [0.82, 0.82, 0.82, 1];
		};
		case 1:  	
		{ 
			_function = getText (_actionConfig >> "failedFunction"); 
			_progressBarColor = [0.91, 0, 0, 1];
		};
	};
	_progressBar ctrlSetBackgroundColor _progressBarColor;
	if !(_function isEqualTo "") then 
	{
		_parameters call (missionNameSpace getVariable [_function,{}]);
	};
	if !(_animation isEqualTo "") then 
	{
		player switchMove "";
		["switchMoveRequest", [netId player, ""]] call ExileClient_system_network_send;
	};
	_progressBar ctrlSetPosition _progressBarMaxSize;
	_progressBar ctrlCommit 0;
};
("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutFadeOut 2; 
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyDownHandle];
(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown", _mouseButtonDownHandle];
ExileClientActionDelayShown = false;
ExileClientActionDelayAbort = false;