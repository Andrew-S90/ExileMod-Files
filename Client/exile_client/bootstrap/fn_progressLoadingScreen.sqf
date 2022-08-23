/**
 * BIS_fnc_progressLoadingScreen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
 * --------------------------
 *
 * Eichi: Careful. This is NOT called when loading the map, only for scripted
 *        loading screens (config viewer, mp join, animation viewer etc.)
 */

disableserialization;

private ["_progress", "_display", "_spinner"];

_progress = _this param [0,0,[0]];

// Arma also executes this server-side...
if (hasInterface) then 
{
	_display = uiNameSpace getVariable ["RscExileLoadingScreen", displayNull];

	if !(isNull _display) then 
	{
		_spinner = _display displayCtrl 66001;

		if !(isNull _spinner) then 
		{
			// I do not know exactly when this happens, but there is one
			// display that does that
			if (_progress isEqualTo -1) then 
			{
				_spinner ctrlSetAngle [random 360, 0.5, 0.5];
			}
			else 
			{
				_spinner ctrlSetAngle [_progress * 360, 0.5, 0.5];
			};
		};
	};

	progressLoadingScreen _progress;
};

_progress