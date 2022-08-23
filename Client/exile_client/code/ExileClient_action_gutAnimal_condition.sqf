/**
 * ExileClient_action_gutAnimal_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_animal", "_cancel"];
_animal = _this;
_cancel = "";
try
{
	if !('Exile_Item_Knife' in (magazines player)) then
	{
		throw "You need a knife";
	};
	if (alive _animal) then
	{
		throw "You can only gut dead animals";
	};
	if !(_animal getVariable ["CanBeGutted", false]) then 
	{
		throw "This animal cannot be gutted";	
	};
	if !(alive player) then
	{
		throw "You daided!"; 
	};
}
catch
{
	_cancel = _exception;
};
_cancel