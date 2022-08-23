/**
 * ExileClient_gui_gasMask_toggle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (_this) then 
{
	ExileClientGasMaskVisible = true;
	ExileLayerGasMask cutRsc ["RscExileGasMask", "PLAIN", 1, false];
}
else 
{
	ExileClientGasMaskVisible = false;
	ExileLayerGasMask cutText ["", "PLAIN"]; 
};