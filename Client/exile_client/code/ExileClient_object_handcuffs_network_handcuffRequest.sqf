/**
 * ExileClient_object_handcuffs_network_handcuffRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_hostageTakerNetID"];
_hostageTakerNetID = _this select 0;
ExileClientIsHandcuffed = true;
ExileClientHostageTaker = objectFromNetId _hostageTakerNetID;
player switchMove "Acts_AidlPsitMstpSsurWnonDnon_loop";
ExileClientBreakFreeActionHandle = player addAction 
[
	"Break free", 
	{call ExileClient_object_handcuffs_breakFree}, 
	nil, 
	0, 
	false 
];
