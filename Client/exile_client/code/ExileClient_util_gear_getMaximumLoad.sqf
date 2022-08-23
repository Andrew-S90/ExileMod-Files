/**
 * ExileClient_util_gear_getMaximumLoad
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_className", "_maximumLoad", "_containerClassName"];
_className = _this;
_maximumLoad = 0;
if (_className != "") then
{
	_containerClassName = getText(configFile >> "CfgWeapons" >> _className >> "ItemInfo" >> "containerClass");
	if(_containerClassName isEqualTo "")then
	{
		_containerClassName = _className;
	};
	_maximumLoad = getNumber(configFile >> "CfgVehicles" >> _containerClassName >> "maximumLoad");
};
_maximumLoad