/**
 * ExileClient_util_math_yawPitchRollToVectorDirAndUp
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_yaw", "_pitch", "_roll", "_sinYaw", "_cosYaw", "_sinPitch", "_cosPitch", "_sinRoll", "_cosRoll", "_direction", "_up"];
_yaw = _this select 0;
_pitch = _this select 1;
_roll = _this select 2;
_sinYaw = sin(_yaw);
_cosYaw = cos(_yaw);
_sinPitch = sin(_pitch);
_cosPitch = cos(_pitch);
_sinRoll = sin(_roll);
_cosRoll = cos(_roll);
_direction = 
[
	_sinYaw * _cosRoll,
	_cosYaw * _cosRoll,
	_sinRoll
];
_up = 
[
	_cosYaw * _sinRoll * _sinPitch,
	_sinYaw * _sinRoll * _sinPitch,
	_cosRoll * _cosPitch
];
[_direction, _up]