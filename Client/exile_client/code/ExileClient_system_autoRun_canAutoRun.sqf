/**
 * ExileClient_system_autoRun_canAutoRun
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_canAutoRun"];
_canAutoRun = true;
try 
{
	if !((vehicle player) isEqualTo player) then 
	{
		throw false;
	};
	if (underwater player) then
	{
		throw false;
	};
	if (((getPosASL player) select 2) < 0.1) then 
	{
		throw false;
	};
	if ((player getHit "legs") >= 0.5) then
	{
		throw false;
	};
	if ((stance player) isEqualTo "UNDEFINED") then 
	{
		throw false;
	};
}
catch 
{
	_canAutoRun = false;
};
_canAutoRun