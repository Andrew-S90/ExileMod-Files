/**
 * ExileClient_object_player_initStamina
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_customAimCoefficient", "_enableFatigue", "_enableStamina"];
_customAimCoefficient = getNumber (missionConfigFile >> "CfgPlayer" >> "customAimCoefficient");
_enableFatigue = (getNumber (missionConfigFile >> "CfgPlayer" >> "enableFatigue")) isEqualTo 1;
_enableStamina = (getNumber (missionConfigFile >> "CfgPlayer" >> "enableStamina")) isEqualTo 1;
player enableFatigue _enableFatigue; 
player enableStamina _enableStamina;
if !(_customAimCoefficient isEqualTo -1) then 
{
	player setCustomAimCoef _customAimCoefficient;
};
