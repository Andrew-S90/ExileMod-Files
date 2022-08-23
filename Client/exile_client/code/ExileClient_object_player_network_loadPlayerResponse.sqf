/**
 * ExileClient_object_player_network_loadPlayerResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_playerNetID", "_scoreString", "_kills", "_deaths", "_hunger", "_thirst", "_alcohol", "_clanData", "_temperature", "_wetness", "_player"];
_playerNetID = _this select 0;
_scoreString = _this select 1;
_kills = _this select 2;
_deaths = _this select 3;
_hunger = _this select 4;
_thirst = _this select 5;
_alcohol = _this select 6;
_clanData = _this select 7;
_temperature = _this select 8;
_wetness = _this select 9;
_player = objectFromNetId _playerNetID;
_player call ExileClient_object_player_initialize;
ExileClientPlayerAttributes = 
[
	(1 - damage player) * 100, 
	(1 - getFatigue player) * 100, 
	_hunger, 
	_thirst, 
	_alcohol, 
	_temperature, 
	_wetness 
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
ExileClientPlayerIsSpawned = true;
call ExileClient_object_player_initStamina;
call ExileClient_system_rating_balance;
ExileClientPlayerScore = parseNumber _scoreString;
ExileClientPlayerKills = _kills;
ExileClientPlayerDeaths = _deaths;
_clanData call ExileClient_system_clan_network_updateClanInfoFull;
if!(_clanData isEqualTo [])then
{
	if!(isNull (_clanData select 5))then
	{
		ExileClientPartyID = netid (_clanData select 5);
	};
};
ExileClientPlayerIsBambi = false;
ExileClientPlayerBambiStateExpiresAt = 0;
if !(ExileClientPartyID isEqualTo -1) then
{
	[player] joinSilent (groupFromNetId ExileClientPartyID);
};
false call ExileClient_gui_hud_showSurvivalInfo;
true