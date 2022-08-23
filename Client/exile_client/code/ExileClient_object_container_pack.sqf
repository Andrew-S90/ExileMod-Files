/**
 * ExileClient_object_container_pack
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_pincode", "_objectDisplayname", "_control"];
_object = _this select 0;
_pincode = "";
_objectDisplayname = getText (configFile >> "CfgVehicles" >> typeOf _object >> "displayName");
_control = [format ["Do you really want to pack this %1?", _objectDisplayname], "Confirm", "Sure", "Nah"] call BIS_fnc_guiMessage;
waitUntil { !isNil "_control"; };
if !(_control) exitWith {};
if (getNumber(configFile >> "CfgVehicles" >> typeOf _object >> "exileIsLockable") isEqualTo 1) then
{
	_pincode = 4 call ExileClient_gui_keypadDialog_show;
	if (_pincode isEqualTo "") exitWith{};
};
["packRequest", [netId _object, _pincode]] call ExileClient_system_network_send;
true