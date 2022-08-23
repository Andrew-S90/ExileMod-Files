/**
 * ExileClient_gui_hud_renderGroupPanel
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_groupControl", "_lines", "_color", "_role"];
disableSerialization;
if (diag_tickTime - ExileHudLastGroupRenderedAt >= 1) then
{
	ExileHudLastGroupRenderedAt = diag_tickTime;
	_display = uiNamespace getVariable "RscExileHUD";
	_groupControl = _display displayCtrl 1000;
	if (ExileClientPartyID isEqualTo -1) then
	{
		if (ctrlShown _groupControl) then
		{
			_groupControl ctrlShow false;
		};
	}
	else 
	{
		if !(ctrlShown _groupControl) then
		{
			_groupControl ctrlShow true;
		};
		_lines = "";
		{
			if (isPlayer _x) then 
			{
				switch (true) do
				{
					case ((damage _x) < 0.1): { _color = "#c0b9ff4b"; };
					case ((damage _x) < 0.5): { _color = "#c0ffac4b"; };
					default 				  { _color = "#c0d20707"; };
				};
				if ((vehicle _x) isEqualTo _x) then 
				{
					_lines = _lines + format ["<t color='%1'>%2</t><br/>", _color, name _x];
				}
				else 
				{
					_role = _x call ExileClient_util_vehicle_getRole;
					switch (_role) do
					{
						case "driver":
						{
							_lines = _lines + format ["<t color='%1'>%2 <img image='\exile_assets\texture\hud\hud_group_driver.paa'/></t><br/>", _color, name _x];
						};
						case "gunner":
						{
							_lines = _lines + format ["<t color='%1'>%2 <img image='\exile_assets\texture\hud\hud_group_gunner.paa'/></t><br/>", _color, name _x];
						};
						case "commander":
						{
							_lines = _lines + format ["<t color='%1'>%2 <img image='\exile_assets\texture\hud\hud_group_commander.paa'/></t><br/>", _color, name _x];
						};
						default 
						{
							_lines = _lines + format ["<t color='%1'>%2 <img image='\exile_assets\texture\hud\hud_group_passenger.paa'/></t><br/>", _color, name _x];
						};
					};
				};
			};
		}
		forEach (units (group player));
		_lines = "<t shadow='0' size='0.8'>" + _lines + "</t>";
		_groupControl ctrlSetStructuredText (parseText _lines);
	};
};