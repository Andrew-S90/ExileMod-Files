/**
 * ExileClient_util_world_getNearestConcreteMixer
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_concreteMixer", "_object"];
_position = _this;
_concreteMixer = objNull;
_object = _position nearestObject "Exile_ConcreteMixer";
if !(isNull _object) then 
{
	if ((_object distance _position) < 5) then 
	{
		_concreteMixer = _object;
	};
};
_concreteMixer