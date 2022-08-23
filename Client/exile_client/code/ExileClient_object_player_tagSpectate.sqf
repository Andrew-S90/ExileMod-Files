/**
 * ExileClient_object_player_tagSpectate
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_success", "_otherPlayer", "_otherPlayerUID"];
if !(getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") exitWith {};
_success = false;
try 
{
	if !(alive player) then
	{
		throw false; 
	};
	_otherPlayer = cursorTarget;
	_otherPlayerUID = getPlayerUID _otherPlayer;
	if (_otherPlayer isEqualTo player) then
	{
		throw false; 
	};
	if !(isPlayer _otherPlayer) then
	{
		throw false; 
	};
	if !(alive _otherPlayer) then
	{
		throw false; 
	};
	if (_otherPlayerUID in ExileClientAllowedSpectate) then
	{
		["ErrorTitleOnly", ["Player already tagged!"]] call ExileClient_gui_toaster_addTemplateToast;
		throw false; 
	};
	if ((player distance _otherPlayer) > 5) then
	{
		throw false; 
	};
	["tagSpectateRequest", [netId _otherPlayer]] call ExileClient_system_network_send;
}
catch 
{
	_success = _exception;
};
call ExileClient_gui_interactionMenu_unhook;
_success