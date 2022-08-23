/**
 * ExileClient_gui_constructionMode_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_title", "_titleControl", "_description", "_descriptionBackground"];
disableSerialization;
_display = uiNamespace getVariable "RscExileConstructionMode";
if (!isNull _display) then
{
	_title = "";
	switch (ExileClientConstructionMode) do 
	{
		case 1: { _title = "FREE MODE"; };
		case 2: { _title = "GRID MODE"; };
		case 3: { _title = "SNAP MODE"; };
	};
	if (ExileClientConstructionModePhysx) then
	{
		_title = _title + " + PHYSICS";
	};
	_titleControl = _display displayCtrl 1000;
	_titleControl ctrlSetText _title;
	_description = _display displayCtrl 1001;
	_description ctrlShow ExileClientConstructionShowHint;
	_descriptionBackground = _display displayCtrl 1002;
	_descriptionBackground ctrlShow ExileClientConstructionShowHint;
};
true