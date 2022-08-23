/**
 * ExileClient_util_cargo_getMagazineMap
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container", "_magazines"];
_container = _this;
_magazines = [];
if (!isNull _container) then
{
	_magazines = magazinesAmmoCargo _container;
};
_magazines