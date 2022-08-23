/**
 * ExileClient_system_russianRoulette_network_winRussianRouletteRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_direction", "_popTabs"];
_position = _this select 0;
_direction = _this select 1;
_popTabs = _this select 2;
player removeWeapon (handGunWeapon player);
player switchMove "";
player setPosASL _position;
player setDir _direction;
["switchMoveRequest", [netId player, ""]] call ExileClient_system_network_send;
ExileIsPlayingRussianRoulette = false;
ExileRussianRouletteChair = objNull;
ExileRussianRouletteCanEscape = false;
ExileRussianRouletteCanFire = false;
call ExileClient_gui_russianRoulette_hide;
true call ExileClient_gui_hud_toggle;
["SuccessTitleAndText", ["Congratulations!", format ["You have survied this round of Russian Roulette!<br/><br/>+%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _popTabs]]] call ExileClient_gui_toaster_addTemplateToast;
