/**
 * ExileClient_gui_hud_toggleStatsBar
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display", "_hungerLabel", "_hungerValue", "_thirstLabel", "_thirstValue", "_healthLabel", "_healthValue", "_environmentTemperatureLabel", "_environmentTemperatureValue", "_bodyTemperatureLabel", "_bodyTemperatureValue"];
disableSerialization;
_display = uiNamespace getVariable "RscExileHUD";
ExileHudMode = ExileHudMode + 1;
if (ExileHudMode isEqualTo 3) then 
{
	ExileHudMode = 0;
};
_hungerLabel = _display displayCtrl 1303;
_hungerLabel ctrlShow (ExileHudMode isEqualTo 0);
_hungerValue = _display displayCtrl 1302;
_hungerValue ctrlShow (ExileHudMode isEqualTo 0);
_thirstLabel = _display displayCtrl 1305;
_thirstLabel ctrlShow (ExileHudMode isEqualTo 0); 
_thirstValue = _display displayCtrl 1304;
_thirstValue  ctrlShow (ExileHudMode isEqualTo 0);
_healthLabel = _display displayCtrl 1307;
_healthLabel ctrlShow (ExileHudMode isEqualTo 1);
_healthValue = _display displayCtrl 1306;
_healthValue ctrlShow (ExileHudMode isEqualTo 1);
_environmentTemperatureLabel = _display displayCtrl 1309;
_environmentTemperatureLabel ctrlShow (ExileHudMode isEqualTo 2);
_environmentTemperatureValue = _display displayCtrl 1308;
_environmentTemperatureValue ctrlShow (ExileHudMode isEqualTo 2);
_bodyTemperatureLabel = _display displayCtrl 1311;
_bodyTemperatureLabel ctrlShow (ExileHudMode isEqualTo 2);
_bodyTemperatureValue = _display displayCtrl 1310;
_bodyTemperatureValue ctrlShow (ExileHudMode isEqualTo 2);