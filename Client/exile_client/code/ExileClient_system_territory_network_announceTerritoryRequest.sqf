/**
 * ExileClient_system_territory_network_announceTerritoryRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flagNetID", "_flagObject"];
_flagNetID = _this select 0;
_flagObject = objectFromNetId _flagNetID;
_flagObject call ExileClient_system_territory_createLocationForTerritory;