/**
 * ExileClient_object_vehicle_interaction_keyLock
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_return", "_vehicle", "_toggle", "_lock"];
_return = false;
_vehicle = ExileClientInteractionObject;
_toggle = 
{
	if(_this isEqualTo 0)then
	{
		true spawn ExileClient_object_lock_toggle;
	}
	else
	{
		false spawn ExileClient_object_lock_toggle;
	};
	true
};
if!(isNull _vehicle)then
{
	if!(_vehicle isKindOf "Man")then
	{
		_lock = _vehicle getVariable ["ExileIsLocked",1];
		if!(_lock isEqualTo 1)then
		{
			_return = _lock call _toggle;
		}
		else
		{
			_lock = locked _vehicle;
			if!(_lock isEqualTo 1)then
			{
				if!(_lock isEqualTo -1)then
				{
					_return = _lock call _toggle;
				};
			};
		};
	};
};
_return