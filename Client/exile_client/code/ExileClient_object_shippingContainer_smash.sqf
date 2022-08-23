/**
 * ExileClient_object_shippingContainer_smash
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_shippingContainerModelNames", "_shippingContainer"];
_shippingContainerModelNames = getArray(missionConfigFile >> "CfgInteractionModels" >> "ShippingContainerSource" >> "models");
_shippingContainer = _shippingContainerModelNames call ExileClient_util_model_getLookAt;
if (!isNull _shippingContainer) then
{
	if (alive _shippingContainer) then 
	{
		["smashShippingContainerRequest", [_shippingContainer]] call ExileClient_system_network_send;
	};
};
true