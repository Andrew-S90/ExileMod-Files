/**
 * ExileClient_gui_clan_polyAddMenu_isCompleatedPoly
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_newPos", "_isCompleated", "_count", "_startPos"];
_newPos = _this;
_isCompleated = false;
_count = count ExileClientClanMapLineRenderArray;
if(_count > 2)then
{
	_startPos = ((ExileClientClanMapLineRenderArray select 0) select 0);
	if((_startPos distance2D _newPos) < 50)then
	{
		_isCompleated = true;
	};
};
_isCompleated