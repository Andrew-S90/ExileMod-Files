/**
 * ExileClient_util_playerEquipment_deserialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_equipment"];
_player = _this select 0;
_equipment = _this select 1;
if !((_equipment select 0) isEqualTo "") then { _player forceAddUniform 	(_equipment select 0); };
if !((_equipment select 1) isEqualTo "") then { _player addVest 			(_equipment select 1); };
if !((_equipment select 2) isEqualTo "") then { _player addBackpackGlobal	(_equipment select 2); };
if !((_equipment select 3) isEqualTo "") then { _player addHeadgear 		(_equipment select 3); };
if !((_equipment select 4) isEqualTo "") then { _player addWeaponGlobal 	(_equipment select 4); }; 
if !((_equipment select 5) isEqualTo "") then { _player addGoggles 			(_equipment select 5); };
{ 
	if !(_x isEqualTo "") then 
	{	
		_player assignItem _x;
	};
}
forEach (_equipment select 6);
if !((_equipment select 7) isEqualTo "") then 
{ 
	_player addWeaponGlobal (_equipment select 7);
	{ 
		if !(_x isEqualTo "") then 
		{	
			_player addPrimaryWeaponItem _x;
		};
	}
	forEach (_equipment select 8);
	if !((_equipment select 9) isEqualTo "") then
	{
		_player addPrimaryWeaponItem (_equipment select 9);
	};
};
if !((_equipment select 10) isEqualTo "") then 
{ 
	_player addWeaponGlobal (_equipment select 10);
	{ 
		if !(_x isEqualTo "") then 
		{	
			_player addSecondaryWeaponItem _x;
		};
	}
	forEach (_equipment select 11);
	if !((_equipment select 12) isEqualTo "") then
	{
		_player addSecondaryWeaponItem (_equipment select 12);
	};
};
if !((_equipment select 13) isEqualTo "") then 
{ 
	_player addWeaponGlobal (_equipment select 13);
	{ 
		if !(_x isEqualTo "") then 
		{	
			_player addHandgunItem _x;
		};
	}
	forEach (_equipment select 14);
	if !((_equipment select 15) isEqualTo "") then
	{
		_player addHandgunItem (_equipment select 15);
	};
};