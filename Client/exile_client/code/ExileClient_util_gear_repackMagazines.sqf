/**
 * ExileClient_util_gear_repackMagazines
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container", "_magazineClassName", "_ammoToChange", "_ammoPerMagazine", "_equippedAmmo", "_equippedMagazines", "_ammoToRefund", "_ammoToRefundThisRound"];
_container = _this select 0;
_magazineClassName = _this select 1;
_ammoToChange = _this select 2;
_ammoPerMagazine = getNumber(configFile >> "CfgMagazines" >> _magazineClassName >> "count");
_equippedAmmo = 0;
_equippedMagazines = magazinesAmmo _container;
if (_ammoPerMagazine > 1) then
{
	{
		if ((_x select 0) isEqualTo _magazineClassName) then
		{
			_equippedAmmo = _equippedAmmo + (_x select 1);
		};
	}
	forEach _equippedMagazines;
	_container removeMagazines _magazineClassName;
	_ammoToRefund = _equippedAmmo + _ammoToChange;
	while {_ammoToRefund > 0} do
	{
		_ammoToRefundThisRound = _ammoToRefund min _ammoPerMagazine;
		_container addMagazine [_magazineClassName, _ammoToRefundThisRound];
		_ammoToRefund = _ammoToRefund - _ammoToRefundThisRound;
	};
};
