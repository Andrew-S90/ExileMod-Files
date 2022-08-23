/**
 * ExileClient_util_model_isInteraction
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_model", "_interactionModelGroupName", "_result", "_modelNames"];
_model = _this select 0;
_interactionModelGroupName = _this select 1;
_result = false;
_modelNames = getArray(missionConfigFile >> "CfgInteractionModels" >> _interactionModelGroupName >> "models");
{
	if (((toLower (str _model)) find (toLower _x)) != -1) exitWith
	{
		_result = true;
	};
}
forEach _modelNames;
_result