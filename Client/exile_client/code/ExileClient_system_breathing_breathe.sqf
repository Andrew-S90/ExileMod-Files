/**
 * ExileClient_system_breathing_breathe
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_head", "_position", "_velocity", "_lifeTime"];
if (isNull player) exitWith {false};
if !(alive player) exitWith {false};
if (underwater player) exitWith {false};
if !((vehicle player) isEqualTo player) exitWith {false};
if (diag_tickTime - ExileLastBreathDroppedAt < 1.2) exitWith {false};
_head = player selectionPosition "Head";
_head set [0, (_head select 0) + 0.04];
_position = player modelToWorld _head;
_position set [2, (_position select 2) + 0.06];
_position = _position vectorAdd ((eyeDirection player) vectorMultiply 0.06);
if ((vectorMagnitude (velocity player)) > 0) then
{
	_velocity = ((velocity player) vectorMultiply 0.7) vectorAdd ((eyeDirection player) vectorMultiply 0.1);
	_lifeTime = 0.6;
}
else 
{
	_velocity = (eyeDirection player) vectorMultiply 0.2;
	_lifeTime = 1;
};
[_lifeTime, _position, _velocity] call ExileClient_system_breathing_dropParticle;
[_lifeTime, _position, _velocity] call ExileClient_system_breathing_dropParticle;
ExileLastBreathDroppedAt = diag_tickTime;