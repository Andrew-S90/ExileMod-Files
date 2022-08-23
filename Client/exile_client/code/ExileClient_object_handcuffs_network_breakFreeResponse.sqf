/**
 * ExileClient_object_handcuffs_network_breakFreeResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_respectString", "_respect"];
_respectString = _this select 0;
_respect = parseNumber _respectString;
ExileClientPlayerScore = ExileClientPlayerScore + _respect;
[["UNSTOPPABLE", _respect]] call ExileClient_gui_hud_showKillDetails;
ExileClientIsHandcuffed = false;
ExileClientHostageTaker = objNull;
player playMove "Acts_AidlPsitMstpSsurWnonDnon_out";
if !(ExileClientBreakFreeActionHandle isEqualTo -1) then 
{
	player removeAction ExileClientBreakFreeActionHandle;
	ExileClientBreakFreeActionHandle = -1;
};