/**
 * ExileClient_gui_xm8_slide_territory_event_onPlayerListBoxSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerListBox", "_index", "_display", "_playerUID", "_kickButton", "_territoryDropDown", "_promoteButton", "_demoteButton", "_flag", "_myRights", "_dudesRights"];
disableSerialization;
_playerListBox = _this select 0;
_index = _this select 1;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_playerUID = _playerListBox lbData _index;
_kickButton = _display displayCtrl 4134;
_kickButton ctrlEnable !(_playerUID isEqualTo (getPlayerUID player));
_territoryDropDown = _display displayCtrl 4132;
_promoteButton = _display displayCtrl 4136;
_demoteButton = _display displayCtrl 4137;
_flag = objectFromNetId (_territoryDropDown lbData (lbCurSel _territoryDropDown));
_myRights = [_flag,getPlayerUID player] call ExileClient_util_territory_getAccessLevel;
_dudesRights = [_flag,_playerUID] call ExileClient_util_territory_getAccessLevel;
if (_playerUID isEqualTo (getPlayerUID player)) then 
{
	_promoteButton ctrlEnable false;
	_demoteButton ctrlEnable false;
}
else 
{
	switch (_myRights select 0) do 
	{ 
		case 3: 
		{  
			if((_dudesRights select 0) isEqualTo 2)then
			{
				_promoteButton ctrlEnable false;
				_demoteButton ctrlEnable true;
			}
			else
			{
				_promoteButton ctrlEnable true;
				_demoteButton ctrlEnable false;
			};
		}; 
		default 
		{
			_promoteButton ctrlEnable false;
			_demoteButton ctrlEnable false;
		};
	};
};