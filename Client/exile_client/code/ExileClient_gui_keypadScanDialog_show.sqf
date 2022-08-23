/**
 * ExileClient_gui_keypadScanDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_signature", "_dialog", "_backgroundCold", "_backgroundHot", "_fingers"];
_signature = _this;
disableSerialization;
createDialog "RscExileKeypadScanDialog";
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
_dialog = uiNameSpace getVariable ["RscExileKeypadScanDialog", displayNull];
_backgroundCold = _dialog displayCtrl 4000;
_backgroundHot = _dialog displayCtrl 4001;
_fingers = 
[
	_dialog displayCtrl 4011,
	_dialog displayCtrl 4002,
	_dialog displayCtrl 4003,
	_dialog displayCtrl 4004,
	_dialog displayCtrl 4005,
	_dialog displayCtrl 4006,
	_dialog displayCtrl 4007,
	_dialog displayCtrl 4008,
	_dialog displayCtrl 4009,
	_dialog displayCtrl 4010
];
{
	_x ctrlShow false;
}
forEach _fingers;
if (_signature isEqualTo "NOPE") then 
{
	_backgroundCold ctrlShow true;
	_backgroundHot ctrlShow false;
}
else 
{
	_backgroundCold ctrlShow false;
	_backgroundHot ctrlShow true;
	{
		if ((str _forEachIndex) isEqualTo (_signature select [0, 1])) then 
		{
			_x ctrlShow true;
			_x ctrlSetTextColor [1, 1, 1, 0.5];
		};
		if ((str _forEachIndex) isEqualTo (_signature select [1, 1])) then 
		{
			_x ctrlShow true;
			_x ctrlSetTextColor [1, 1, 1, 0.75];
		};
		if ((str _forEachIndex) isEqualTo (_signature select [2, 1])) then 
		{
			_x ctrlShow true;
			_x ctrlSetTextColor [1, 1, 1, 1];
		};
	}
	forEach _fingers;
};