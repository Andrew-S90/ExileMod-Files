/**
 * ExileClient_gui_clan_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientClanMapIconRenderArray = [];
ExileClientClanMapIconPreviewArray = [];
ExileClientAllMarkerIcons = getArray (configFile >> "CfgClanMakerIcons" >> "Icons");
ExileClientMapPolyMode = false;
ExileClientClanMapLineCompleated = false;
ExileClientClanMapPolygonRenderArray = [];
ExileClientClanMapLineRenderArray = [];
ExileClientLineLastRenderPos = [0,0,0];
ExileClientMapDrawColors = 
[		
	["Red",[221/255, 38/255, 38/255, 1]],
	["Blue",[63/255, 212/255, 252/255, 1]],
	["Yellow",[255/255, 180/255, 24/255, 1]],
	["Green",[160/255, 223/255, 59/255, 1]],
	["Gray",[111/255, 113/255, 122/255, 1]],
	["White",[1, 1, 1, 1]],
	["Orange",[255/255,153/255,0/255,1]]
];