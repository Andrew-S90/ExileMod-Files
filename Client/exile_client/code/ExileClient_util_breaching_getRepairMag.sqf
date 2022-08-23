/**
 * ExileClient_util_breaching_getRepairMag
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_kitClassname", "_objectType", "_explosiveMode", "_materialType"];
_object = _this;
_kitClassname = "";
try
{
	if(isNull _object)then
	{
		throw "";
	};	
	_objectType = typeOf _object;
	if(_objectType isEqualTo "")then
	{
		throw "";
	};
	_explosiveMode = "(getText (_x >> 'staticObject')) isEqualTo _objectType" configClasses (configFile >> "CfgConstruction");
	if(_explosiveMode isEqualTo [])then
	{
		throw "";
	};
	_explosiveMode = _explosiveMode select 0;
	_materialType = getNumber(_explosiveMode >> "materialType");
	switch (_materialType) do
	{ 
		case 10 :
		{
			_kitClassname = "Exile_Item_RepairKitWood";
		}; 
		case 11 :
		{
			_kitClassname = "Exile_Item_RepairKitMetal";
		};
		case 12 :
		{
			_kitClassname = "Exile_Item_RepairKitConcrete";
		};
		default{};
	};
}catch{};
_kitClassname