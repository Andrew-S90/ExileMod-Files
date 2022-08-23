/**
 * ExileClient_system_music_musicChange
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_mode", "_tracks"];
_mode = _this;
_tracks = getArray(missionConfigFile >> "CfgExileMusic" >> _mode);
if!(_tracks isEqualTo [])then
{
	_tracks spawn
	{
		3 fadeMusic 0.01;
		uisleep 3;
		playMusic (selectRandom _this);
		3 fadeMusic 0.3;
	};
};
true