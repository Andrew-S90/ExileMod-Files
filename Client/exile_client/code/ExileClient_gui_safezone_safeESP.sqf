/**
 * ExileClient_gui_safezone_safeESP
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_espRenderRange", "_drone", "_distance", "_alpha", "_clr", "_crew", "_pos"];
_espRenderRange = _this;
_drone = getConnectedUAV player;
if (!(isNull _drone) && {((UAVControl _drone) select 0) isEqualTo player} && {!(((UAVControl _drone) select 1) isEqualTo "")}) exitWith {};
if (!isNull cameraOn) then
{
	{
		if (!isNull _x) then
		{
			if (isPlayer _x) then
			{
				if !(isObjectHidden _x) then 
				{
					_distance = cameraOn distance _x;
					_alpha = (1-(_distance/_espRenderRange));
					_clr = [1,1,1,_alpha];	
					_crew = crew (vehicle _x);
					_name = '';
					{
						if(_forEachIndex == 0) then
						{
							_name = _name + format['%1',name _x];
						}
						else
						{
							if(alive _x) then {_name = _name + format[', %1',name _x];};
						};
					}
					forEach _crew;
					_pos = _x modelToWorldVisual (_x selectionPosition "head");
					_pos set[2, (_pos select 2) + 1];
					drawIcon3D['',_clr,_pos,0,0,0,_name,1,0.04];
				};
			};
		};
	}
	forEach ((cameraOn nearEntities[['Exile_Unit_Player', 'LandVehicle', 'Ship', 'Air'], _espRenderRange]) - [cameraOn, vehicle cameraOn]);
};
true