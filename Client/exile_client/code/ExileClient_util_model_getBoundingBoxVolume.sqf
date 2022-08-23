/**
 * ExileClient_util_model_getBoundingBoxVolume
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_boundingBox", "_boundingBoxMinimum", "_boundingBoxMaximum", "_volume"];
_boundingBox = boundingBoxReal _this;
_boundingBoxMinimum = _boundingBox select 0;
_boundingBoxMaximum = _boundingBox select 1;
_volume = (abs ((_boundingBoxMinimum select 0) - (_boundingBoxMaximum select 0)))
	    * (abs ((_boundingBoxMinimum select 1) - (_boundingBoxMaximum select 1)))
	    * (abs ((_boundingBoxMinimum select 2) - (_boundingBoxMaximum select 2)));
_volume