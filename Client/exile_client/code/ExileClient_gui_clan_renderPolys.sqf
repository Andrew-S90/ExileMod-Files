/**
 * ExileClient_gui_clan_renderPolys
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control"];
_control = _this select 0;
if!(ExileClientClanInfo isEqualTo [])then
{
	{
		_control drawPolygon [_x select 0,_x select 1];
	}
	forEach (ExileClientClanInfo select 4);
};
