/**
 * ExileClient_util_world_getTerrainGradient
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_terrainHeightCurrnet", "_terrainHeightInfront", "_gradient"];
_object = _this;
_terrainHeightCurrnet = getTerrainHeightASL (getPosASL _object);
_terrainHeightInfront = getTerrainHeightASL (AGLToASL(_object getRelPos [1,0]));
_gradient = abs(atan(_terrainHeightCurrnet - _terrainHeightInfront));
_gradient