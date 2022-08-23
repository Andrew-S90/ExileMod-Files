/**
 * ExileClient_system_autoRun_switch
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_newAction", "_previousAction"];
_newAction = _this;
_previousAction = player getvariable ["ExileAutoRunPreviousAction",""];
if !(_newAction isEqualTo _previousAction) then 
{
	player playActionNow _newAction;
	player playAction _newAction;
	player setVariable ["ExileAutoRunPreviousAction", _newAction];
} 
else 
{
	player playAction _newAction;
	player playAction _newAction;
};