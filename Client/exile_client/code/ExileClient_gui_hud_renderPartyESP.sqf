/**
 * ExileClient_gui_hud_renderPartyESP
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_red", "_green", "_blue", "_alpha", "_markeralpha", "_pixelScale", "_iconTextSize", "_nameTextSize", "_distance", "_textAlpha", "_iconAlpha", "_position", "_iconLabel", "_markerPosition", "_markerScreenPosition", "_distanceToCenterOfScreen", "_adjustedMarkerAlpha", "_markerAlpha"];
if (alive player) then 
{
	if (ExileClientAllowPartyMarkers) then 
	{	
		if !(ExileClientPartyID isEqualTo -1) then
		{
			_red = profileNamespace getVariable ["ExilePartyESPRed", 0.7];
			_green = profileNamespace getVariable ["ExilePartyESPGreen", 0.93];
			_blue = profileNamespace getVariable ["ExilePartyESPBlue", 0];
			_alpha = profileNamespace getVariable ["ExilePartyESPAlpha", 0.75];
			_markeralpha = profileNamespace getVariable ["ExilePartyMarkerAlpha", 0.75];
			_pixelScale = safeZoneH / (getResolution select 1); 
			_iconTextSize = 18 * pixelH;
			_nameTextSize = 24 * pixelH;
			{
				if (isPlayer _x) then 
				{
					if !(_x isEqualTo player) then 
					{
						_distance = cameraOn distance _x;
						_textAlpha = linearConversion [20, 23, _distance, _alpha, 0, true];
						_iconAlpha = _alpha - _textAlpha;
						_position = _x modelToWorldVisual (_x selectionPosition "head");
						if (_textAlpha > 0) then 
						{
							if !(ExilePlayerInSafezone) then 
							{
								drawIcon3D 
								[
									"",
									[_red, _green, _blue, _textAlpha],
									[_position select 0, _position select 1, (_position select 2) + 0.75],
									0, 
									0, 
									0,
									name _x,
									false,
									_nameTextSize, 
									"PuristaMedium",
									"center"
								];
							};
						};
						if (_iconAlpha > 0) then 
						{
							switch (ExilePartyEspMode) do 
							{
								case 1:
								{
									_iconLabel = format ["%1 - %2m", name _x, floor _distance];
								};
								case 0:
								{
									_iconLabel = format ["%1m", floor _distance];
								};
								case 2:
								{
									_iconLabel = "";
								};
							};
							drawIcon3D 
							[
								"\a3\ui_f\data\map\GroupIcons\selector_selectable_ca.paa",
								[_red, _green, _blue, _iconAlpha],
								_position,
								1, 
								1, 
								0,
								_iconLabel,
								false,
								_iconTextSize, 
								"PuristaMedium",
								"center"
							];
						};
					};
					_markerPosition = _x getVariable ["ExilePartyMarker", -1];
					if !(_markerPosition isEqualTo -1) then 
					{
						_markerScreenPosition = worldToScreen _markerPosition;
						if !(_markerScreenPosition isEqualTo []) then 
						{
							_distanceToCenterOfScreen = _markerScreenPosition distance2D [0.5, 0.5];
							_adjustedMarkerAlpha = linearConversion [0.1, 0.4, _distanceToCenterOfScreen, 0.15, _markerAlpha, true];
							drawIcon3D 
							[
								"\exile_assets\texture\hud\hud_icon_marker_ca.paa",
								[1, 1, 1, _adjustedMarkerAlpha],
								ASLtoAGL _markerPosition, 
								1, 
								1, 
								0,
								name _x,
								false,
								_iconTextSize, 
								"PuristaMedium",
								"center"
							];
						};
					};
				};
			}
			forEach units (group player);
		};
	};
};