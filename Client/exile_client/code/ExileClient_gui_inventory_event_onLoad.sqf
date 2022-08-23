/**
 * ExileClient_gui_inventory_event_onLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_groundTab", "_soldierTab", "_groundContainer", "_soldierContainer"];
disableSerialization;
_display = _this select 0;
_groundTab = _display displayCtrl 6321; 
_soldierTab = _display displayCtrl 6401; 
_groundContainer = _display displayCtrl 632; 
_soldierContainer = _display displayCtrl 640; 
if !(isNull ExileClientCurrentInventorySecondaryContainer) then
{
	try 
	{
		if (ExileClientCurrentInventorySecondaryContainer isKindOf "Exile_Container_Abstract_Safe") then
		{
			if (ExileClientCurrentInventorySecondaryContainer getVariable ["ExileIsLocked", 1] isEqualTo -1) then
			{
				throw true; 
			};
		};
		if ((locked ExileClientCurrentInventorySecondaryContainer) isEqualTo 2) exitWith
		{
			throw true; 
		};
	}
	catch
	{
		_soldierTab ctrlSetPosition [-1, -1];
		_soldierTab ctrlShow false;
		_soldierTab ctrlCommit 0;
		_soldierContainer ctrlSetPosition [-1, -1];
		_soldierContainer ctrlShow false;
		_soldierContainer ctrlCommit 0;
		ctrlSetFocus _groundTab;
		ctrlActivate _groundTab;
	};
};
call ExileClient_gui_inventory_updatePopTabControls;
