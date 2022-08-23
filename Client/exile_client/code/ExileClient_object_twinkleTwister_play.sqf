/**
 * ExileClient_object_twinkleTwister_play
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object"];
_object = _this;
_object animate ["RotorLeft", 0, true]; 
_object animate ["RotorMiddle", 0, true]; 
_object animate ["RotorRight", 0, true];
_object animate ["RotorLeft", 4]; 
_object animate ["RotorMiddle", 6]; 
_object animate ["RotorRight", 8];
_object animate ["Light01", 1];