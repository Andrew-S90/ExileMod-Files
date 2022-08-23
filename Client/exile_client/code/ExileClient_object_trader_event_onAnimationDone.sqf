/**
 * ExileClient_object_trader_event_onAnimationDone
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_trader", "_animations"];
_trader = _this select 0;
_animations = _trader getVariable ["ExileAnimations", []];
_trader switchMove (_animations select floor(random (count _animations)));
true