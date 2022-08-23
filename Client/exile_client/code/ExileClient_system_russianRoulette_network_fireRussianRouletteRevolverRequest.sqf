/**
 * ExileClient_system_russianRoulette_network_fireRussianRouletteRevolverRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_shotIsFatal", "_display", "_hint"];
_shotIsFatal = _this select 0;
_display = uiNameSpace getVariable ["RscExileRussianRoulette", displayNull];
_hint = _display displayCtrl 4003;
_hint ctrlSetStructuredText (parseText "<t align='center' size='2' color='#ffffff' shadow='false'>Press <t color='#3fd4fc'>SPACE</t> to fire</t>");
_hint ctrlShow true;
ExileRussianRouletteNextShotIsFatal = _shotIsFatal;
ExileRussianRouletteCanFire = true;