/**
 * ExileClient_gui_hud_renderWaypoints
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_distance"];
if !(ExileClientWaypoints isEqualTo []) then
{
	{
		_distance = player distance2D _x;
		drawIcon3D 
		[
			"\a3\ui_f\data\Map\MapControl\custommark_CA.paa",
			[1, 1, 1, linearConversion [0, 200, _distance, 0.25, 1, true]],
			_x,
			0.65,
			0.65,
			0,
			format ["%1m", floor _distance],
			0,
			0.03,
			"PuristaMedium",
			"center",
			true
		];
	}
	forEach ExileClientWaypoints;
};