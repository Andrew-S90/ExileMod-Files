/**
 * ExileClient_util_model_isNearby
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_radius", "_modelNames", "_result", "_modelName", "_modelCount"];
_position = _this select 0;
_radius = _this select 1;
_modelNames = _this select 2;
_result = false;
{
	_modelName = _x;
	_modelCount = { ((str(_x) find _modelName) != -1) } count (_position nearObjects _radius);
	if (_modelCount > 0) exitWith 
	{ 
		_result = true 
	};
} 
foreach _modelNames;
_result