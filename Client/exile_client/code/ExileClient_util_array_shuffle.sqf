/**
 * ExileClient_util_array_shuffle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_count", "_i"];
_count = count _this;
for "_i" from 1 to _count do 
{
    _this pushBack (_this deleteAt (floor (random _count)));
};
_this