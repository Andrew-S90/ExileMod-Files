/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

diag_log "Exile Client - Playing intro...";

// Play some beats
playMusic "ExileTrack01";
addMusicEventHandler ["MusicStop", {[] spawn {sleep 10; playMusic "ExileTrack01"}}];

// To hide the mini lag between the loops
cutText ["", "BLACK FADED", 69]; 

// No bullshit
enableEnvironment false;
showCinemaBorder false;

// Loop video
while {true} do 
{
	_video = ["exile_assets\video\menu.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};
