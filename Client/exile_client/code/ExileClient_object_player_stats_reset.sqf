/**
 * ExileClient_object_player_stats_reset
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientPlayerEffectNames = ["Health", "Stamina", "Hunger", "Thirst", "Blood Alcohol", "Temperature", "Wetness"];
ExileClientPlayerEffects = [];
ExileClientPlayerAttributes = 
[
	100, 
	100, 
	100, 
	100, 
	0, 
	37, 
	0 
];
ExileClientPlayerAttributesASecondAgo = 
[
	ExileClientPlayerAttributes select 0,
	ExileClientPlayerAttributes select 1,
	ExileClientPlayerAttributes select 2,
	ExileClientPlayerAttributes select 3,
	ExileClientPlayerAttributes select 4,
	ExileClientPlayerAttributes select 5,
	ExileClientPlayerAttributes select 6
];
ExileClientPlayerLastHpRegenerationAt = diag_tickTime;
ExileClientPlayerIsSpawned = false;			
ExileClientPlayerIsInfantry = true;			
ExileClientPlayerVelocity = 0;
ExileClientPlayerScore = 0;
ExileClientPlayerKills = 0;
ExileClientPlayerDeaths = 0;
ExileClientPlayerIsInCombat = false;			
ExileClientPlayerLastCombatAt = -1;
ExileClientPlayerLoad = 0;
ExileClientPlayerIsOverburdened = false;		
ExileClientPlayerOxygen = 100;
ExileClientPlayerIsAbleToBreathe = true;		
ExileClientPlayerIsDrowning = false;			
ExileClientPlayerIsInjured = false;	
ExileClientPlayerIsBurning = false;			
ExileClientPlayerIsBleeding = false;			
ExileClientPlayerIsExhausted = false;
ExileClientPlayerIsHungry = false;			
ExileClientPlayerIsThirsty = false;
ExileClientPlayerHolsteredWeapon = "";
ExileClientPlayerIsBambi = false;
ExileClientPlayerBambiStateExpiresAt = 0;
ExileClientEarplugsInserted = false;
ExileClientIsHandcuffed = false;
ExileIsPlayingRussianRoulette = false;
ExileRussianRouletteHudVisible = false;
ExileRussianRouletteChair = objNull;
true