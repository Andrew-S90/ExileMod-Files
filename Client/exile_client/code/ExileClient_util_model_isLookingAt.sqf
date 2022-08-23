/**
 * ExileClient_util_model_isLookingAt
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_modelNames", "_result", "_objects", "_modelName", "_modelCount"];
_modelNames = _this;
_result = false;
_objects = lineIntersectsWith [eyePos player, ATLtoASL (player modelToWorld [0, 3, 0]), player, objNull, true];
{
	_modelName = _x;
	_modelCount = { ((str(_x) find _modelName) != -1) } count (_objects);
	if (_modelCount > 0) exitWith 
	{ 
		_result = true 
	};
} 
foreach _modelNames;
_result