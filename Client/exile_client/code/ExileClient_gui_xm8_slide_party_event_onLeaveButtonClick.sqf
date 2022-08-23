/**
 * ExileClient_gui_xm8_slide_party_event_onLeaveButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
["Leave party?", "Leave", "Stay"] call ExileClient_gui_xm8_showConfirm;
waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
if (ExileClientXM8ConfirmResult) then
{
	[player] joinSilent (createGroup independent);
	ExileClientPartyID = -1;
	['apps', 1] call ExileClient_gui_xm8_slide;
};
