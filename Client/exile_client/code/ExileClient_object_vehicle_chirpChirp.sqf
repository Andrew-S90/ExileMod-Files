/**
 * ExileClient_object_vehicle_chirpChirp
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle", "_lockedState", "_sound"];
_vehicle = _this select 0;
_lockedState = _this select 1;
_sound = "";
if (_lockedState isEqualTo 2) then 
{
	if (isText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "exileLockSound")) then
	{
		_sound = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "exileLockSound");
		playSound3D [_sound, _vehicle, false, getPosASL _vehicle, 1, 1, 50]; 
	};
	if ((_vehicle isKindOf "LandVehicle") || (_vehicle isKindOf "Air")) then
	{
		if (local _vehicle) then
		{
			_vehicle setPilotLight true;
			_vehicle setCollisionLight true;
			uiSleep 0.1;
			_vehicle setPilotLight false;
			_vehicle setCollisionLight false;
			uiSleep 0.1;
			_vehicle setPilotLight true;
			_vehicle setCollisionLight true;
			uiSleep 0.1;
			_vehicle setPilotLight false;
			_vehicle setCollisionLight false;
		}
		else 
		{
			player action ["LightOn", _vehicle];
			player action ["CollisionLightOn", _vehicle];
			uiSleep 0.1;
			player action ["LightOff", _vehicle];
			player action ["CollisionLightOff", _vehicle];
			uiSleep 0.1;
			player action ["LightOn", _vehicle];
			player action ["CollisionLightOn", _vehicle];
			uiSleep 0.1;
			player action ["LightOff", _vehicle];
			player action ["CollisionLightOff", _vehicle];
		};
	};
}
else 
{
	if (isText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "exileUnlockSound")) then
	{
		_sound = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "exileUnlockSound");
		playSound3D [_sound, _vehicle, false, getPosASL _vehicle, 1, 1, 50]; 
	};
	if ((_vehicle isKindOf "LandVehicle") || (_vehicle isKindOf "Air")) then
	{
		if (local _vehicle) then
		{
			_vehicle setPilotLight true;
			_vehicle setCollisionLight true;
			uiSleep 1;
			_vehicle setPilotLight false;
			_vehicle setCollisionLight false;
		}
		else 
		{
			player action ["LightOn", _vehicle];
			player action ["CollisionLightOn", _vehicle];
			uiSleep 1;
			player action ["LightOff", _vehicle];
			player action ["CollisionLightOff", _vehicle];
		};
	};
};
