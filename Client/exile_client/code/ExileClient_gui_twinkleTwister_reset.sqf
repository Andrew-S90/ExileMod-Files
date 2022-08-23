/**
 * ExileClient_gui_twinkleTwister_reset
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_caption", "_startButton", "_quitButton", "_infoText", "_gameText"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileTwinkleTwister", displayNull];
_caption = _dialog displayCtrl 4001;
_caption ctrlShow true;
_startButton = _dialog displayCtrl 4002;
_startButton ctrlShow true;
_quitButton = _dialog displayCtrl 4003;
_quitButton ctrlShow true;
_infoText = _dialog displayCtrl 4004;
_infoText ctrlShow true;
_gameText = _dialog displayCtrl 4005;
_gameText ctrlShow false;