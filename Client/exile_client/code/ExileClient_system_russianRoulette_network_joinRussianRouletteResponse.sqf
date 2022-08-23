/**
 * ExileClient_system_russianRoulette_network_joinRussianRouletteResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_chairNetID", "_listOfPlayers"];
_chairNetID = _this select 0;
_listOfPlayers = _this select 1;
ExileIsPlayingRussianRoulette = true;
ExileRussianRouletteNextShotIsFatal = false;
ExileRussianRouletteCanEscape = false;
ExileRussianRouletteCanFire = false;
ExileRussianRouletteChair = objectFromNetid _chairNetID;
if !((handGunWeapon player) isEqualTo "") then 
{
	player removeWeapon (handGunWeapon player);
};
["switchMoveRequest", [netId player, "Exile_RouletteSitting01"]] call ExileClient_system_network_send;
player addWeapon "hgun_Pistol_heavy_02_F"; 
player selectWeapon (handGunWeapon player); 
player switchMove "Exile_RouletteSitting01";  
player disableCollisionWith ExileRussianRouletteChair;
player setPosASL (getPosASL ExileRussianRouletteChair);
player setDir ((getDir ExileRussianRouletteChair) + 180);   
