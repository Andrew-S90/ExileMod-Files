/**
 * ExileClient_gui_modelBox_create
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientModelBoxPosition = 
[
	(getPosATL player) select 0, 
	(getPosATL player) select 1, 
	((getPosATL player) select 2) + 1000
];
ExileClientModelBoxVehicle = objNull; 
ExileClientModelBoxBackgroundObject = "Exile_Helper_50mBox" createVehicleLocal ExileClientModelBoxPosition;
ExileClientModelBoxBackgroundObject setPosATL ExileClientModelBoxPosition;
ExileClientModelBoxBackgroundObject setDir 270;
ExileClientModelBoxBackgroundObject setObjectTexture [0, "#(rgb,8,8,3)color(0.5,0.5,0.5,1)"]; 
ExileClientModelBoxCameraFocusObject = "LOGIC" createVehicleLocal ExileClientModelBoxPosition;
ExileClientModelBoxCameraFocusObject setPosATL ExileClientModelBoxPosition;
ExileClientModelBoxCameraPosition = 
[
	(ExileClientModelBoxPosition select 0) - 25, 
	ExileClientModelBoxPosition select 1, 
	ExileClientModelBoxPosition select 2
];
ExileClientModelBoxCamera = "camera" camCreate ExileClientModelBoxCameraPosition;
ExileClientModelBoxCamera cameraEffect ["internal", "back"];
ExileClientModelBoxCamera camPrepareFOV 0.7; 
ExileClientModelBoxCamera camPrepareTarget ExileClientModelBoxCameraFocusObject;
ExileClientModelBoxCamera setPosATL ExileClientModelBoxCameraPosition;
showCinemaBorder false; 
ExileClientModelBoxCamera camCommitPrepared 0;
ExileClientModelThreadHandle = [] spawn ExileClient_gui_modelBox_thread_update;
