/**
 * ExileClient_gui_modelBox_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleClassName", "_modelBoundingDimensions", "_modelBoundingRadius"];
_vehicleClassName = _this;
if !(isNull ExileClientModelBoxVehicle) then
{
	deleteVehicle ExileClientModelBoxVehicle;
};
ExileClientModelBoxVehicle = _vehicleClassName createVehicleLocal ExileClientModelBoxPosition;
ExileClientModelBoxVehicle setPosATL ExileClientModelBoxPosition;
ExileClientModelBoxVehicle setDir 0;
ExileClientModelBoxVehicle enableSimulation false;
_modelBoundingDimensions = ExileClientModelBoxVehicle call BIS_fnc_boundingBoxDimensions;
_modelBoundingRadius = ExileClientModelBoxVehicle call BIS_fnc_boundingCircle;
if ((_vehicleClassName isEqualTo "Exile_Bike_OldBike") || (_vehicleClassName isEqualTo "Exile_Bike_MountainBike")) then
{
	_modelBoundingDimensions set [2, 1];
};
ExileClientModelBoxCameraFocusPosition = 
[
	ExileClientModelBoxPosition select 0, 
	ExileClientModelBoxPosition select 1, 
	(ExileClientModelBoxPosition select 2) + ((_modelBoundingDimensions select 2) * 0.5)
];
ExileClientModelBoxCameraFocusObject setPosATL ExileClientModelBoxCameraFocusPosition;
ExileClientModelBoxCameraPosition = 
[
	(ExileClientModelBoxCameraFocusPosition select 0) - _modelBoundingRadius, 
	ExileClientModelBoxCameraFocusPosition select 1, 
	(ExileClientModelBoxPosition select 2) + (_modelBoundingDimensions select 2) 
];
ExileClientModelBoxCamera camPrepareTarget ExileClientModelBoxCameraFocusObject;
ExileClientModelBoxCamera setPosATL ExileClientModelBoxCameraPosition;
ExileClientModelBoxCamera camCommitPrepared 0;
