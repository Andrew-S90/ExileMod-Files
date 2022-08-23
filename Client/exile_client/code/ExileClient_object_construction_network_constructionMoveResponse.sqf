/**
 * ExileClient_object_construction_network_constructionMoveResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2022 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_response", "_objectClass"];
_response = _this select 0;
_objectClass = _this select 1;
if(_response)then
{
    _objectClass call ExileClient_construction_beginExistingObject;
}
else
{   
    _exception = _this select 1;
    ["ErrorTitleAndText", ["Construction aborted!", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
true