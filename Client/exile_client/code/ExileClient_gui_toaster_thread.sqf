/**
 * ExileClient_gui_toaster_thread
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_toastControl", "_status", "_statusChangeAt", "_toastPosition"];
disableSerialization;
if ((diag_tickTime - ExileClientLastToastTickAt) >= 0.25) then
{
	{
		_toastControl = _x select 0;
		_status = _x select 1;
		_statusChangeAt = _x select 2;
		if (diag_tickTime >= _statusChangeAt) then 
		{
			switch (_status) do 
			{
				case 0: 
				{
					_toastPosition = ctrlPosition _toastControl;
					_toastPosition set [1, (_toastPosition select 1) + 20 * pixelH];
					_toastControl ctrlSetPosition _toastPosition;
					_toastControl ctrlSetFade 1;
					_toastControl ctrlCommit 0.25;
					ExileClientToasts set [_forEachIndex, [_toastControl, 1, diag_tickTime + 1]];
				};
				case 1:
				{
					ctrlDelete _toastControl;
					ExileClientToasts deleteAt _forEachIndex;
				};
			};
		};
	}
	forEach ExileClientToasts;
	ExileClientLastToastTickAt = diag_tickTime;
};