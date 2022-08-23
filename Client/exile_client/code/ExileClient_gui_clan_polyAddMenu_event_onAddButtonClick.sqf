/**
 * ExileClient_gui_clan_polyAddMenu_event_onAddButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_colorDropdown", "_polyRenderColor", "_positions", "_count", "_color", "_maxAmountOfPolys", "_maxAmountOfPolyLines"];
_control = uiNamespace getVariable ['RscExileMapCreatePoly', controlNull];
_colorDropdown = _control controlsGroupCtrl 4000;
_polyRenderColor = (_colorDropdown lbColor (lbCursel _colorDropdown));
if !(ExileClientClanMapLineRenderArray isEqualTo []) then
{
	try
	{
		_positions = ExileClientClanMapLineRenderArray apply {_x select 0};
		_count  = count _positions;
		_color = (ExileClientClanMapLineRenderArray select 0) select 2;
		_maxAmountOfPolys = getNumber(missionConfigFile >> "CfgClans" >> "maximumPolys");
		if(count(ExileClientClanInfo select 4) >= _maxAmountOfPolys)then
		{
			throw format ["Your clan can only have %1 polygones at a time.", _maxAmountOfPolys];
		};
		_maxAmountOfPolyLines = getNumber(missionConfigFile >> "CfgClans" >> "maximumPolyNode");
		if(count _positions > _maxAmountOfPolyLines)then
		{
			throw format ["Polygones are limited to %1 lines. Please try again.", _maxAmountOfPolyLines];
		};
		["addPolyRequest", [_positions,_color]] call ExileClient_system_network_send;
		call ExileClient_gui_clan_polyAddMenu_event_onUnload;
	}
	catch
	{
		["ErrorTitleAndText", ["Failed to add polygon!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
	};
};