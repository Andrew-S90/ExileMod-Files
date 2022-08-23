/**
 * ExileClient_gui_twinkleTwister_event_onStartButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog", "_startButton", "_caption", "_quitButton", "_infoText", "_gameText", "_dice", "_prizeConfig", "_chances", "_prizeName", "_gameTextOutput", "_symbols", "_allPrizes", "_i", "_randomPrizeConfig", "_prizeSymbol"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileTwinkleTwister", displayNull];
_startButton = _dialog displayCtrl 4002;
_caption = _dialog displayCtrl 4001;
_quitButton = _dialog displayCtrl 4003;
_infoText = _dialog displayCtrl 4004;
_gameText = _dialog displayCtrl 4005;
_caption ctrlShow false;
_startButton ctrlShow false;
_quitButton ctrlShow false;
_infoText ctrlShow false;
_gameText ctrlSetStructuredText (parseText "");
_gameText ctrlShow true;
_dice = floor (random 100);
_prizeConfig = objNull;
_chances = getArray (configFile >> "CfgTwinkleTwister" >> "chances");
_prizeName = ""; 
_gameTextOutput = "";
_symbols = [];
{
	if (_dice <= (_x select 0)) exitWith 
	{
		_prizeName = _x select 1;
	};
}
forEach _chances;
if (_prizeName isEqualTo "") then 
{
	_allPrizes = "true" configClasses (configFile >> "CfgTwinkleTwister" >> "Prizes");
	for "_i" from 0 to 2 do 
	{
		_randomPrizeConfig = selectRandom _allPrizes;
		_symbols pushBack 
		[
			getText (_randomPrizeConfig >> "symbol"),
			getText (_randomPrizeConfig >> "color")
		];
	};
}
else 
{
	_prizeConfig = configFile >> "CfgTwinkleTwister" >> "Prizes" >> _prizeName;
	_prizeSymbol = 
	[
		getText (_prizeConfig >> "symbol"),
		getText (_prizeConfig >> "color")
	];
	_symbols pushBack _prizeSymbol;
	_symbols pushBack _prizeSymbol;
	_symbols pushBack _prizeSymbol;
};
uiSleep 1;
{
	playSound format["SndExileTwinkleTwisterCharge0%1", _forEachIndex + 1];
	uiSleep 4.5;
	playSound format["SndExileTwinkleTwisterChargeDone0%1", _forEachIndex + 1];
	_gameTextOutput = _gameTextOutput + format ["<t font='PressStart2P' align='center' shadow='0' color='%1'>%2</t><br/><br/>", _x select 1, _x select 0];
	_gameText ctrlSetStructuredText (parseText _gameTextOutput);
	_gameText ctrlCommit 0;
	uiSleep 3;
}
forEach _symbols;
if (_prizeName isEqualTo "") then 
{
	playSound "SndExileTwinkleTwisterFail";
	_gameTextOutput = _gameTextOutput + "<t font='PressStart2P' align='center' shadow='0' color='#ffffff'><br/><br/>You lose :(</t>";
	_gameText ctrlSetStructuredText (parseText _gameTextOutput);
	_gameText ctrlCommit 0;
}
else 
{
	playSound "SndExileTwinkleTwisterSuccess";
	_gameTextOutput = _gameTextOutput + format["<t font='PressStart2P' align='center' shadow='0' color='#ffffff'><br/><br/>Epic win!<br/><br/>%1</t>", getText (_prizeConfig >> "name")];
	_gameText ctrlSetStructuredText (parseText _gameTextOutput);
	_gameText ctrlCommit 0;
};
uiSleep 5; 
call ExileClient_gui_twinkleTwister_reset;