/**
 * ExileClient_util_model_renderBoundingBox
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_modelSpaceBoundingBox", "_min", "_max", "_lines"];
_object = _this;
_modelSpaceBoundingBox = boundingBoxReal _object;
_min = _object modelToWorld (_modelSpaceBoundingBox select 0); 
_max = _object modelToWorld (_modelSpaceBoundingBox select 1); 
_lines = 
[
	[[_min select 0, _min select 1, _min select 2], [_max select 0, _min select 1, _min select 2]],
	[[_min select 0, _max select 1, _min select 2], [_max select 0, _max select 1, _min select 2]],
	[[_min select 0, _min select 1, _min select 2], [_min select 0, _max select 1, _min select 2]],
	[[_max select 0, _min select 1, _min select 2], [_max select 0, _max select 1, _min select 2]],
	[[_min select 0, _min select 1, _max select 2], [_max select 0, _min select 1, _max select 2]],
	[[_min select 0, _max select 1, _max select 2], [_max select 0, _max select 1, _max select 2]],
	[[_min select 0, _min select 1, _max select 2], [_min select 0, _max select 1, _max select 2]],
	[[_max select 0, _min select 1, _max select 2], [_max select 0, _max select 1, _max select 2]],
	[[_min select 0, _min select 1, _min select 2], [_min select 0, _min select 1, _max select 2]],
	[[_min select 0, _max select 1, _min select 2], [_min select 0, _max select 1, _max select 2]],
	[[_max select 0, _min select 1, _min select 2], [_max select 0, _min select 1, _max select 2]],
	[[_max select 0, _max select 1, _min select 2], [_max select 0, _max select 1, _max select 2]]
];
{
	drawLine3D [_x select 0, _x select 1, [0.7, 0.93, 0, 1]];
}
forEach _lines;