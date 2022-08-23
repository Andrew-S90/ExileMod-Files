/**
 * ExileClient_gui_itemDetails_event_onCraftingRecipeDoubleClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_listBoxControl", "_listBoxControlIndex", "_recipeClassName"];
disableSerialization;
_listBoxControl = _this select 0;
_listBoxControlIndex = _this select 1;
_recipeClassName = _listBoxControl lbData _listBoxControlIndex;
_recipeClassName call ExileClient_gui_crafting_show;
true;