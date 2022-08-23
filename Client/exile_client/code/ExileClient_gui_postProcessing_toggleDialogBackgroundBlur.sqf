/**
 * ExileClient_gui_postProcessing_toggleDialogBackgroundBlur
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
if (_this) then
{
	ExileClientPostProcessingBackgroundBlur ppEffectAdjust [2];
	ExileClientPostProcessingBackgroundBlur ppEffectEnable true;
	ExileClientPostProcessingBackgroundBlur ppEffectCommit 1;
}
else 
{
	ExileClientPostProcessingBackgroundBlur ppEffectAdjust [0];
	ExileClientPostProcessingBackgroundBlur ppEffectCommit 0;
	ExileClientPostProcessingBackgroundBlur ppEffectEnable false;
};
true