/**
 * ExileClient_util_world_findWaterPosition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_radiusToSearchIn", "_radiusOfEmptySpace", "_attempts", "_resultPosition", "_randomPositionInCircle", "_nearestObject", "_boundRadiusOfNearestObject", "_normalizedPositionOfNearestObject", "_distanceToNearestObject"];
_position = _this select 0; 
_radiusToSearchIn = _this select 1;
_radiusOfEmptySpace = _this select 2;
_attempts = 0;
_position set [2, 0]; 
_resultPosition = [0, 0, 0];
try 
{
	while {_attempts < 1000} do
	{
		_randomPositionInCircle = [_position, _radiusToSearchIn] call ExileClient_util_math_getRandomPositionInCircle;
		if (surfaceIsWater _randomPositionInCircle) then
		{
			_nearestObject = nearestObject _randomPositionInCircle;
			if (_nearestObject isEqualTo objNull) then
			{
				throw _randomPositionInCircle;
			};
			_boundRadiusOfNearestObject = _nearestObject call BIS_fnc_boundingCircle;
			_normalizedPositionOfNearestObject = getPosATL _nearestObject;
			_normalizedPositionOfNearestObject set [2, _randomPositionInCircle select 2];
			_distanceToNearestObject = _randomPositionInCircle distance _nearestObject;
			if (_distanceToNearestObject - _boundRadiusOfNearestObject > _radiusOfEmptySpace) then
			{
				throw _randomPositionInCircle;
			};
		};
		_attempts = _attempts + 1;
	};
}
catch 
{
	_resultPosition = _exception;
};
_resultPosition