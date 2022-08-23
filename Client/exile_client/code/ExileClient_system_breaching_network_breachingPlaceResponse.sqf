/**
 * ExileClient_system_breaching_network_breachingPlaceResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_charge", "_explosiveClassName"];
_charge = _this select 0;
try
{
	if(isNull player)then
	{
		throw "You do not exist! :)";
	};
	if(isNull _charge)then
	{
		throw "Breaching charge does not exist?";
	};
	_explosiveClassName = ExileCurrentBreachingObject call ExileClient_util_breaching_getBreachingMag;
	if(_explosiveClassName isEqualTo -1)then
	{
		throw "Invalid breaching class.";
	};
	if((_explosiveClassName select 0) isEqualTo 0)then
	{
		if((_explosiveClassName select 1) in (magazines player))then
		{
			[player, (_explosiveClassName select 1)] call ExileClient_util_playerCargo_remove;
		}
		else
		{
			throw (format ["You are missing a %1.",_explosiveClassName select 1]);
		};
	}
	else
	{
		if((backpack player) isEqualTo (_explosiveClassName select 1))then
		{
			removeBackpack player;
		}
		else
		{		
			throw (format ["You are missing a %1.",_explosiveClassName select 1]);
		};
	};
	[_explosiveClassName select 3, [_charge,ExileCurrentBreachingObject]] spawn ExileClient_action_execute;
}
catch
{
	["ErrorTitleAndText", ["Breaching failed!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};