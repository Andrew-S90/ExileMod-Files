/**
 * ExileClient_object_flies_event_onKilled
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flies"];
if (isServer && isDedicated) then 
{
	deleteVehicle _this;
};
if (hasInterface) then
{
	_flies = _this getVariable ["ExileFlies", objNull];
	if !(isNull _flies) then 
	{
		deleteVehicle _flies;
	};
};