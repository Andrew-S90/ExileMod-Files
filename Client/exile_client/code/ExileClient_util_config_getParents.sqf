/**
 * ExileClient_util_config_getParents
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_config", "_parents"];
_config = _this;
_parents = [];
while { isClass _config } do 
{
	_config = inheritsFrom _config;
	if (isClass _config) then 
	{
		_parents pushBack (configName _config);
	};
};
_parents