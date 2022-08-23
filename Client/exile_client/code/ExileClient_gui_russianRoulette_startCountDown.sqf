/**
 * ExileClient_gui_russianRoulette_startCountDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_endTime"];
_endTime = _this; 
call ExileClient_gui_russianRoulette_stopCountDown;
ExileRussianRouletteCountDownThread = _endTime spawn ExileClient_gui_russianRoulette_countDownThread;