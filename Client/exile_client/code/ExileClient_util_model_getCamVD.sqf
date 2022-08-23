/**
 * ExileClient_util_model_getCamVD
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_from", "_to", "_vdir", "_vUp", "_vup"];
_from = _this selectionPosition "cctv_view_from";
_to = _this selectionPosition "cctv_view_to";
_vdir = _from vectorFromTo _to;
_vUp = _vdir vectorCrossProduct [-(_vdir select 1), _vdir select 0, 0];
[_vdir,_vup]