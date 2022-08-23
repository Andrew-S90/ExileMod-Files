/**
 * ExileClient_system_russianRoulette_fire
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_hint", "_sounds", "_direction"];
disableSerialization;
ExileRussianRouletteCanFire = false;
_display = uiNameSpace getVariable ["RscExileRussianRoulette", displayNull];
_hint = _display displayCtrl 4003;
_hint ctrlShow false;
if (ExileRussianRouletteNextShotIsFatal) then 
{
	player playActionNow "GestureExileSuicide01";   
	uiSleep 4.4;   
	_sounds =  
	[ 
		"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_01.wss", 
		"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_02.wss", 
		"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_03.wss" 
	]; 
	playSound3D [selectRandom _sounds, player, true];
	player attachTo [ExileRussianRouletteChair, [0, 0, 0]];
	player setDir 180; 
	ExileRussianRouletteChair setCenterOfMass [[0, 0, 1], 0]; 
	ExileRussianRouletteChair setMass 4;  
	_direction = (getDir ExileRussianRouletteChair) + 90;    
	ExileRussianRouletteChair setVelocity [(sin _direction) * 4, (cos _direction) * 4, 0];   
	uiSleep 0.75;   
	player enableCollisionWith ExileRussianRouletteChair;    
	ExileRussianRouletteChair enableCollisionWith player;    
	detach player;
	player removeWeapon (handGunWeapon player);
	player setDamage 1; 
}
else 
{
	player playActionNow "GestureExileSuicide01";   
	uiSleep 4.4;   
	playSound3D ["A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr.wss", player, true];  
	uiSleep 0.25;   
	player playActionNow "GestureExileSuicideCancel01";   
	["fireRussianRouletteRevolverResponse", []] call ExileClient_system_network_send;
};
