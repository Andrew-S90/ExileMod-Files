/**
 * ExileClient_util_model_getLookAt
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_modelNames", "_foundObject", "_objects", "_object", "_objectClassName"];
_modelNames = _this;
_foundObject = objNull;
_objects = lineIntersectsWith [eyePos player, ATLtoASL (player modelToWorld [0, 3, 0]), player, objNull, true];
{
	_object = _x;
	_objectClassName = toLower (str _object);
	{
		if ((_objectClassName find (toLower _x)) != -1) exitWith
		{ 
			_foundObject = _object;
		};
	}
	forEach _modelNames;
	if (!isNull _foundObject) exitWith {};
}
forEach _objects;
_foundObject