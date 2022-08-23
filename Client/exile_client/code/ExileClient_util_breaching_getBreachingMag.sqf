/**
 * ExileClient_util_breaching_getBreachingMag
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object", "_explosiveClassName", "_objectType", "_explosiveMode"];
_object = _this;
_explosiveClassName = [-1,""];
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
	_explosiveMode = getNumber(_explosiveMode >> "materialType");
	if(_explosiveMode isEqualTo 0)then
	{
		throw "";
	};
	switch (_explosiveMode) do 
	{ 
		case 10 :
		{
			_explosiveClassName = [0,"Exile_Item_BreachingCharge_Wood","Exile_Ammo_BreachingCharge_Wood", "plantChargeWood"];
		}; 
		case 11 :
		{
			_explosiveClassName = [0,"Exile_Item_BreachingCharge_Metal","Exile_Ammo_BreachingCharge_Metal","plantChargeMetal"];
		};
		case 12 :
		{
			_explosiveClassName = [0,"Exile_Item_BreachingCharge_BigMomma","Exile_Ammo_BreachingCharge_BigMomma","plantChargeConcrete"];
		}; 
		default {}; 
	};
}
catch{};
_explosiveClassName