/**
 * ExileClient_gui_toaster_toggle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_show"];
_show = _this;
if (_show) then 
{
	if !(ExileClientToastAreaVisible) then 
	{
		("RscExileToastAreaLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileToastArea", "PLAIN", 0, true]; 
		ExileClientToastAreaVisible = true;
	};
}
else 
{
	if (ExileClientToastAreaVisible) then 
	{	
		("RscExileToastAreaLayer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];  
		ExileClientToastAreaVisible = false;
	};
};