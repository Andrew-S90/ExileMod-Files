/**
 * ExileClient_object_player_von_checkVon
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (currentChannel isEqualTo 1) then
{
	if ((uiNamespace getVariable ["ExileIsUsingVON", false]) isEqualTo true) then
	{
		setCurrentChannel 5;
		systemChat "You are speaking in side chat, sssshhh plz!";
	};
};
true