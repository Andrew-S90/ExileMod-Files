/**
 * ExileClient_system_music_mainMusicLoop
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if(ExileClientPlayerIsInCombat)then
{
	ExileClientCurrentMusicMode = "Combat";
}
else
{
	if(ExileClientPlayerIsBambi)then
	{
		ExileClientCurrentMusicMode = "Intro";
	}
	else
	{
		ExileClientCurrentMusicMode = "Ambient";
	};
};
if!(ExileClientLastMusicmode isEqualTo ExileClientCurrentMusicMode)then
{
	ExileClientCurrentMusicMode call ExileClient_system_music_musicChange;
};
ExileClientLastMusicmode = ExileClientCurrentMusicMode;
true