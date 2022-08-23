/**
 * ExileClient_gui_keypadDialog_updateControls
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_screenText", "_text", "_i", "_okayButton"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileKeypad", displayNull];
_screenText = _display displayCtrl 4001;
if (ExileClientPinCode isEqualTo "") then 
{
	_text = "ENTER PIN";
}
else 
{
	if (profileNameSpace getVariable ["ExileStreamFriendlyUI", false]) then
	{
		_text = "";
		for "_i" from 1 to (count ExileClientPinCode) do 
		{
			_text = _text + "*";
		};
	}
	else 
	{
		_text = ExileClientPinCode;
	};
};
_screenText ctrlSetText _text;
_okayButton = _display displayCtrl 4000;
_okayButton ctrlEnable ((count ExileClientPinCode) isEqualTo ExileClientPinCodeLength);
true