/**
 * ExileClient_gui_escape_abort
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_controlAbort", "_controlSuicide", "_controlTitle", "_controlFiledShit", "_abortTime", "_alivePlayers"];
disableSerialization;
waitUntil {!isNull (findDisplay 49)};
_display = findDisplay 49;
_controlAbort = _display displayCtrl 104;
_controlSuicide = _display displayCtrl 1010;
_controlTitle = _display displayCtrl 523;
_controlFiledShit = _display displayCtrl 122;
_abortTime = diag_tickTime + 10;
_controlFiledShit ctrlEnable false;
_controlFiledShit ctrlCommit 0;
_controlTitle ctrlSetText "exilemod.com";
_controlTitle ctrlCommit 0;
if !(alive player) then
{
	_controlAbort ctrlEnable true;
	_controlAbort ctrlSetText "Disconnect";
	_controlAbort ctrlCommit 0;
	if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") then 
	{
		if ((getplayerUID player) in ExileEscapeSpectateUIDS) then
		{
			_controlSuicide ctrlEnable true;
			_controlSuicide ctrlSetText "Spectate";
			_controlSuicide ctrlSetEventHandler ["ButtonClick", "[] call ExileClient_object_player_network_startSpectating"];
			_controlSuicide ctrlCommit 0;
		}
		else
		{
			if !(ExileClientCanSpectate isEqualTo []) then
			{
				_alivePlayers = [];
				{
					if (alive _x) then
					{
						_alivePlayers pushBack _x;
					};
				} 
				forEach ExileClientCanSpectate;
				if ((count _alivePlayers) > 0) then
				{
					ExileClientPlayerToSpectate = selectRandom _alivePlayers;
					format ["Selected to spectate %1", ExileClientPlayerToSpectate] call ExileClient_util_log;
					_controlSuicide ctrlEnable true;
					_controlSuicide ctrlSetText "Spectate";
					_controlSuicide ctrlSetEventHandler ["ButtonClick", "[] call ExileClient_object_player_network_startSpectatingFriend"];
					_controlSuicide ctrlCommit 0;
				}
				else
				{
					_controlSuicide ctrlEnable false;
					_controlSuicide ctrlSetText "";
					_controlSuicide ctrlSetEventHandler ["ButtonClick", "[] call ExileClient_gui_escape_respawn"];
					_controlSuicide ctrlCommit 0;	
				};
			}
			else 
			{
				_controlSuicide ctrlEnable false;
				_controlSuicide ctrlSetText "";
				_controlSuicide ctrlSetEventHandler ["ButtonClick", "[] call ExileClient_gui_escape_respawn"];
				_controlSuicide ctrlCommit 0;	
			};
		};
	}
	else
	{
		_controlSuicide ctrlEnable true;
		_controlSuicide ctrlSetText "Respawn";
		_controlSuicide ctrlSetEventHandler ["ButtonClick", "[] call ExileClient_gui_escape_respawn"];
		_controlSuicide ctrlCommit 0;
	};
}
else 
{
	if ( ExileClientPlayerIsInCombat || (vehicle player != player) || ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then
	{
		_controlAbort ctrlEnable false;
		_controlAbort ctrlSetText "Disconnect";
		_controlAbort ctrlCommit 0;
		_controlSuicide ctrlEnable false;
		_controlSuicide ctrlSetText "Respawn";
		_controlSuicide ctrlCommit 0;
	}
	else 
	{
		if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape" && {isNil "ExileEscapeGameEndAt"}) then 
		{
			_controlAbort ctrlEnable true;
			_controlAbort ctrlSetText "Disconnect";
			_controlAbort ctrlCommit 0;
			_controlSuicide ctrlEnable false;
			_controlSuicide ctrlSetText "Respawn";
			_controlSuicide ctrlCommit 0;
		}
		else
		{
			_controlSuicide ctrlEnable true;
			_controlSuicide ctrlSetText "Commit Suicide";
			_controlSuicide ctrlSetEventHandler ["ButtonClick", "[] spawn ExileClient_gui_escape_suicide"];
			_controlSuicide ctrlCommit 0;
			while {!isNull _display} do
			{
				_controlAbort ctrlEnable false;
				_controlAbort ctrlSetText format ["(Please wait (%1s)", ceil(_abortTime - diag_tickTime)];
				_controlAbort ctrlCommit 0;
				if (diag_tickTime > _abortTime) exitWith
				{
						_controlAbort ctrlEnable true;
						_controlAbort ctrlSetText "Disconnect";
						_controlAbort ctrlCommit 0;
				};
			};
		};		
	};
};
true