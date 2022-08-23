/**
 * ExileClient_system_russianRoulette_network_updateRussianRouletteGameStatusRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_gameStatus", "_potAmount", "_players", "_currentPlayerNetID", "_currentShot", "_countDownEndTime", "_display", "_potValue", "_shotValue", "_playerListString", "_playerNetID", "_playerName", "_playerShot", "_player", "_playerList", "_timer", "_hint"];
disableSerialization;
_gameStatus = _this select 0;
_potAmount = _this select 1;
_players = _this select 2;
_currentPlayerNetID = _this select 3;
_currentShot = _this select 4;
_countDownEndTime = _this select 5;
if !(ExileRussianRouletteHudVisible) then 
{
	call ExileClient_gui_russianRoulette_show;
};
_display = uiNameSpace getVariable ["RscExileRussianRoulette", displayNull];
_potValue = _display displayCtrl 4007;
_potValue ctrlSetStructuredText (parseText (format ["<t size='1.6' font='OrbitronMedium' align='center' shadow='false'>%1<t color='#3fd4fc'><img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='false' /></t></t>", _potAmount]));
_shotValue = _display displayCtrl 4008;
_playerListString = "<t shadow='false'>";
{
	_playerNetID = _x select 0;
	_playerName = _x select 1;
	_playerShot = _x select 2;
	_player = objectFromNetid _playerNetID;
	if (isNull _player) then 
	{
		_playerListString = _playerListString + format ["<t color='#808080'>%1</t><br/>", _playerName];
	}
	else 
	{
		if (alive _player) then 
		{
			if (_playerNetID isEqualTo _currentPlayerNetID) then 
			{
				_playerListString = _playerListString + format ["<t align='left' color='#3fd4fc'>%1</t><t color='#3fd4fc' align='right'>%2/6</t><br/>", _playerName, _playerShot];
			}
			else 
			{
				_playerListString = _playerListString + format ["<t align='left'>%1</t><t align='right'>%2/6</t><br/>", _playerName, _playerShot];
			};
		}
		else 
		{
			_playerListString = _playerListString + format ["<t color='#808080'>%1</t><br/>",_playerName];
		};
	};
}
forEach _players;
_playerListString = _playerListString + "</t>";
_playerList = _display displayCtrl 4006;
_playerList ctrlSetStructuredText (parseText _playerListString);
if (_countDownEndTime isEqualTo -1) then 
{
	call ExileClient_gui_russianRoulette_stopCountDown;
	_timer = _display displayCtrl 4009;
	_timer ctrlSetFade 0;
	_timer ctrlCommit 0;
	_timer ctrlSetStructuredText (parseText "<t align='center' size='0.8' shadow='false' font='OrbitronLight'>00:00</t>");
}
else 
{
	_countDownEndTime call ExileClient_gui_russianRoulette_startCountDown;
};
_hint = _display displayCtrl 4003;
_hint ctrlShow false;
ExileRussianRouletteCanEscape = false;
ExileRussianRouletteCanFire = false;
switch (_gameStatus) do 
{
	case 0:
	{
		if ((count _players) isEqualTo 1) then 
		{
			_hint ctrlSetStructuredText (parseText "<t align='center' size='2' color='#ffffff' shadow='false'>Press <t color='#3fd4fc'>ESCAPE</t> to leave</t>");
			_hint ctrlShow true;
			ExileRussianRouletteCanEscape = true;
		};
		_shotValue ctrlSetStructuredText (parseText "<t align='center' size='2' color='#ffffff' shadow='false' font='OrbitronMedium'>-</t>");
	};
	case 1:
	{
		_shotValue ctrlSetStructuredText (parseText (format ["<t align='center' size='2' color='#ffffff' shadow='false' font='OrbitronMedium'>%1</t>", _currentShot]));
	};
};