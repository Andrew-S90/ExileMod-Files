/**
 * ExileClient_object_handcuffs_free
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_success", "_otherPlayer"];
_success = false;
try 
{
	if !(alive player) then
	{
		throw false; 
	};
	if (ExileClientIsHandcuffed) then 
	{
		throw false;
	};
	_otherPlayer = cursorTarget;
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
	if !(_otherPlayer getVariable ["ExileIsHandcuffed", false]) then
	{
		throw false; 
	};
	if ((player distance _otherPlayer) > 5) then
	{
		throw false; 
	};
	if !(player call ExileClient_object_handcuffs_hasFreeItems) then
	{
		["ErrorTitleOnly", ["Missing tools!"]] call ExileClient_gui_toaster_addTemplateToast;
		throw false; 
	};
	["freeRequest", [netId _otherPlayer]] call ExileClient_system_network_send;
}
catch 
{
	_success = _exception;
};
call ExileClient_gui_interactionMenu_unhook;
_success