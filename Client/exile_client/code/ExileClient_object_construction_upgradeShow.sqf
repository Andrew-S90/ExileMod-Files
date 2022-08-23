/**
 * ExileClient_object_construction_upgradeShow
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_showUpgradeMenu", "_constructionConfigs", "_constructionConfig", "_upgradeObject"];
_showUpgradeMenu = false;
_constructionConfigs = "(getText (_x >> 'staticObject')) isEqualTo (typeOf ExileClientInteractionObject)" configClasses (configFile >> "CfgConstruction");
if !(_constructionConfigs isEqualTo []) then 
{
	_constructionConfig = _constructionConfigs select 0;
	_upgradeObject = getText (_constructionConfig >> "upgradeObject");
	_showUpgradeMenu = !(_upgradeObject isEqualTo "");
	_showUpgradeMenu = _showUpgradeMenu && (call ExileClient_util_world_isInOwnTerritory);
};
 _showUpgradeMenu