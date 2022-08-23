/**
 * ExileClient_gui_clan_renderIcons
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_control", "_scale", "_icon", "_color", "_position", "_iconSize", "_text", "_textSize"];
if!(ExileClientClanInfo isEqualTo [])then
{
	_control = _this select 0;
	_scale = 10^(abs log (ctrlMapScale _control));
	{
		_icon = _x select 0;
		_color = _x select 1;
		_position = _x select 2;
		_iconSize = _x select 3;
		_text = _x select 4;
		_textSize = _x select 5;
		_iconSize = (_iconSize * 0.15) * _scale;
		_textSize = (_textSize * 0.15) * _scale;
		_control drawIcon
		[
			_icon,
			_color,
			_position,
			_iconSize,
			_iconSize,
			0,
			_text,
			1,
			_textSize,
			'EtelkaMonospacePro',
			'right'
		];
	}
	forEach (ExileClientClanInfo select 3);
};	
if(!(ExileClientClanMapIconPreviewArray isEqualTo []))then
{
	_control drawIcon
	[
		ExileClientClanMapIconPreviewArray select 0,
		ExileClientClanMapIconPreviewArray select 1,
		ExileClientClanMapIconPreviewArray select 2,
		((ExileClientClanMapIconPreviewArray select 3) *  0.15) * _scale,
		((ExileClientClanMapIconPreviewArray select 3) *  0.15) * _scale,
		0,
		ExileClientClanMapIconPreviewArray select 4,
		1,
		((ExileClientClanMapIconPreviewArray select 5) *  0.15) * _scale,
		'EtelkaMonospacePro',
		'right'
	];
};
