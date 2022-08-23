/**
 * ExileClient_object_anomaly_thread_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hour", "_startHour", "_endHour", "_i"];
if (diag_tickTime >= ExileNextAnomalyAt) then 
{
	_hour = date select 3;
	_startHour = getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Anomalies" >> "startHour");
	_endHour = getNumber (missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Anomalies" >> "endHour");
	if (_hour >= _startHour || _hour <= _endHour) then 
	{
		if !(isNull player) then 
		{
			for "_i" from 0 to (1 + (floor (random 5))) do 
			{
				call ExileClient_object_anomaly_dropParticle;
			};
		};
		ExileNextAnomalyAt = diag_tickTime + (30 + (random 30));
	}
	else 
	{
		ExileNextAnomalyAt = diag_tickTime + 60;
	};
};