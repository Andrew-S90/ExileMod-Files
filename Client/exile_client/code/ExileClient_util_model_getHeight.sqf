/**
 * ExileClient_util_model_getHeight
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_height", "_boundingBox", "_boundingBoxMinimum", "_boundingBoxMaximum"];
_object = _this;
_height = 0;
_boundingBox = boundingBoxReal _object;
_boundingBoxMinimum = _boundingBox select 0;
_boundingBoxMaximum = _boundingBox select 1;
_height = abs((_boundingBoxMaximum select 2) - (_boundingBoxMinimum select 2)); 
_height