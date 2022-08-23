/**
 * ExileClient_object_player_thread_bleedToDeath
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_secondsRemaining", "_transition"];
_secondsRemaining = ExileClientBleedOutCountDownEnd - time;
if (_secondsRemaining <= 0) then
{
	"bleedToDeath - Killing player..." call ExileClient_util_log;
	call ExileClient_object_player_death_forceRespawn;
}
else 
{
	_transition = 1 - (_secondsRemaining / ExileClientBleedOutCountDownDuration);
	if (_secondsRemaining < 20) then
	{
		if (_secondsRemaining < 10) then
		{
			[_transition * 10] call BIS_fnc_bloodEffect;
		};
		if (!ExileClientBleedOutHeartbeatPlaying) then
		{
			ExileClientBleedOutHeartbeatPlaying = true;
			missionnamespace setvariable ["RscRespawnCounter_colorID", 2];
			playSound ["SndExileHeartbeatStopping", true]; 
			_secondsRemaining fadeSound 0;
		};
	};
	if (!ExileClientBleedOutHeartbeatPlaying) then
	{
		playSound ["SndExileHeartbeatSlowSingle", true]; 
	};
};
