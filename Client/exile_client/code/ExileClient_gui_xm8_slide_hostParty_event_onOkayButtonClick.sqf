/**
 * ExileClient_gui_xm8_slide_hostParty_event_onOkayButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_nameInput", "_partyName", "_alphabet", "_partyNameLength"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_nameInput = _display displayCtrl 4082;
_partyName = ctrlText _nameInput;
_alphabet = getText (missionConfigFile >> "CfgClans" >> "clanNameAlphabet");
try 
{
	_partyName = _partyName call ExileClient_util_string_trim;
	_partyNameLength = count _partyName;
	if (_partyNameLength isEqualTo 0) then
	{
		throw "Please enter a name";
	};
	if (_partyNameLength < 2) then
	{
		throw "Name is too short";
	};
	if (_partyNameLength > 20) then
	{
		throw "Name is longer than 20 letters";
	};
	{
		if ((toLower (groupId _x)) isEqualTo (toLower _partyName)) exitWith 
		{
			throw "This name is already in use!";
		};
	}
	forEach allGroups;
	_group = createGroup independent;
	_group setGroupIdGlobal [_partyName];
	[player] joinSilent _group;
	ExileClientPartyID = netId _group;
	["party", 0] call ExileClient_gui_xm8_slide;
}
catch
{
	[_exception, "Okay"] call ExileClient_gui_xm8_showWarning;
};