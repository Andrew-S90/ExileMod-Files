/**
 * ExileClient_system_rating_balance
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_rating"];
_rating = rating player;
if (_rating < 100000) then 
{
	player addRating (100000 - _rating);
};