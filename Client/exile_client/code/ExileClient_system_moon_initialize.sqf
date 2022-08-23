/**
 * ExileClient_system_moon_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientMoonLight = "#lightpoint" createVehicleLocal [0, 0, 0];
ExileClientMoonLight setLightAttenuation [10e10, 150, 4.31918e-005, 4.31918e-005];  
ExileClientMoonLight setLightAmbient [63/255, 102/255, 155/255];
ExileClientMoonLight setLightBrightness 0.75;
ExileClientMoonLight setLightDayLight false; 
