/**
 * ExileClient_gui_baguette_toggle
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
	if !(ExileClientBaguetteAreaVisible) then
	{
		("RscExileBaguetteAreaLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileBaguetteArea", "PLAIN", 0, true];
		ExileClientBaguetteAreaVisible = true;
	};
}
else
{
	if (ExileClientBaguetteAreaVisible) then
	{
		("RscExileBaguetteAreaLayer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
		ExileClientBaguetteAreaVisible = false;
	};
};