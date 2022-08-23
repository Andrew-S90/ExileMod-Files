/**
 * ExileClient_util_playerEquipment_canAdd
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player", "_itemClassName", "_itemInformation", "_itemCategory", "_itemType", "_canAdd", "_weaponType", "_compatibleWeaponItems", "_attachmentSlotIndex", "_assignedItems"];
_player = _this select 0;
_itemClassName = toLower (_this select 1); 
_itemInformation = [_itemClassName] call BIS_fnc_itemType;
_itemCategory = _itemInformation select 0;
_itemType = _itemInformation select 1;
_canAdd = false;
switch (_itemCategory) do 
{
	case "Weapon":
	{
		_weaponType = getNumber( configFile >> "CfgWeapons" >> _itemClassName >> "type"); 
		switch (_weaponType) do 
		{
			case 1: 	{ _canAdd = ((primaryWeapon _player) isEqualTo ""); }; 
			case 4: { _canAdd = ((secondaryWeapon _player) isEqualTo ""); }; 
			case 2: 	{ _canAdd = ((handgunWeapon _player) isEqualTo ""); }; 
		};
	};
	case "Equipment":
	{
		switch (_itemType) do
		{
			case "Glasses": 	{ _canAdd = ((goggles _player isEqualTo "")); }; 
			case "Headgear": 	{ _canAdd = ((headgear _player) isEqualTo ""); }; 
			case "Vest": 		{ _canAdd = ((vest _player) isEqualTo ""); }; 
			case "Uniform": 	{ _canAdd = ((uniform _player) isEqualTo ""); }; 
			case "Backpack": 	{ _canAdd = ((backpack _player) isEqualTo ""); }; 
		};
	};
	case "Magazine":
	{
		{
			if !((_x select 0) isEqualTo "") then
			{
				if ((_x select 1) isEqualTo []) then
				{
					_compatibleWeaponItems = (_x select 0) call ExileClient_util_gear_getCompatibleWeaponItems;
					if (_itemClassName in _compatibleWeaponItems) then
					{
						_canAdd = true;
					};
				};
			};
			if (_canAdd) exitWith {};
		}
		forEach 
		[
			[primaryWeapon _player, primaryWeaponMagazine _player], 
			[secondaryWeapon _player, secondaryWeaponMagazine _player], 
			[handgunWeapon _player, handgunMagazine _player] 
		];
	};
	case "Item":
	{
		switch (_itemType) do
		{
			case "AccessoryMuzzle", 
			case "AccessoryPointer", 
			case "AccessorySights", 
			case "AccessoryBipod": 
			{
				_attachmentSlotIndex = switch (_itemType) do
				{
					case "AccessoryMuzzle": 	{ 0 }; 
					case "AccessoryPointer": 	{ 1 };
					case "AccessorySights": 		{ 2 };
					case "AccessoryBipod": 		{ 3 };
				};
				{
					if !((_x select 0) isEqualTo "") then
					{
						if (((_x select 1) select _attachmentSlotIndex) isEqualTo "") then
						{
							_compatibleWeaponItems = (_x select 0) call ExileClient_util_gear_getCompatibleWeaponItems;
							if (_itemClassName in _compatibleWeaponItems) then
							{
								_canAdd = true;
							};
						};
					};
					if (_canAdd) exitWith {};
				}
				forEach 
				[
					[primaryWeapon _player, primaryWeaponItems _player], 
					[secondaryWeapon _player, secondaryWeaponItems _player], 
					[handgunWeapon _player, handgunItems _player] 
				];
			};
			case "Watch": 
			{
				_assignedItems = assignedItems _player;
				if !(("ItemWatch" in _assignedItems) || ("Exile_Item_XM8" in _assignedItems)) then 
				{
					_canAdd = true;
				};
			};
			case "Map", 
			case "Radio", 
			case "NVGoggles", 
			case "Glasses", 
			case "Compass": 
			{
				if !(_itemClassName in (assignedItems _player)) then
				{
					_canAdd = true;
				};
			};
			case "GPS", 
			case "UAVTerminal": 
			{
				if !(("ItemGPS" in (assignedItems _player)) || ("I_UavTerminal" in (assignedItems _player))) then
				{
					_canAdd = true;
				};
			};
			case "LaserDesignator", 
			case "Binocular": 
			{
				if ((binocular _player) isEqualTo "") then
				{
					_canAdd = true;
				};
			};
		};
	};
};
_canAdd