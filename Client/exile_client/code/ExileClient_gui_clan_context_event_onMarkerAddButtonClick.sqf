/**
 * ExileClient_gui_clan_context_event_onMarkerAddButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_createMenu", "_offset"];
_createMenu = uiNamespace getVariable ['RscExileMapCreateMenu', displayNull];
if(!isNull _createMenu)then
{
	_offset = 0.1;
	_createMenu ctrlSetPosition 
	[
		(ExileClientMapScreenPos select 0) + (_offset * 3),
		(ExileClientMapScreenPos select 1) - _offset
	];
	_createMenu ctrlCommit 0;
	_createMenu ctrlShow true;
	_createMenu call ExileClient_gui_clan_markerAddMenu_event_onLoad;
};
true