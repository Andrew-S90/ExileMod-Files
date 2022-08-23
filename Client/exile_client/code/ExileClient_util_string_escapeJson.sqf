/**
 * ExileClient_util_string_escapeJson
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_input", "_output"];
_input = _this;
_output = "";
{
	switch (_x) do 
	{
		case  0: { _output = _output + "\u0000"; };
		case  1: { _output = _output + "\u0001"; };
		case  2: { _output = _output + "\u0002"; };
		case  3: { _output = _output + "\u0003"; };
		case  4: { _output = _output + "\u0004"; };
		case  5: { _output = _output + "\u0005"; };
		case  6: { _output = _output + "\u0006"; };
		case  7: { _output = _output + "\u0007"; };
		case  8: { _output = _output + "\u0008"; };
		case  9: { _output = _output + "\t"; };
		case 10: { _output = _output + "\n"; };
		case 11: { _output = _output + "\u0011"; };
		case 12: { _output = _output + "\u0012"; };
		case 13: { _output = _output + "\r"; };
		case 14: { _output = _output + "\u0014"; };
		case 15: { _output = _output + "\u0015"; };
		case 16: { _output = _output + "\u0016"; };
		case 17: { _output = _output + "\u0017"; };
		case 18: { _output = _output + "\u0018"; };
		case 19: { _output = _output + "\u0019"; };
		case 20: { _output = _output + "\u0020"; };
		case 34: { _output = _output + "\"""; };
		case 92: { _output = _output + "\\"; };
		default	 { _output = _output + (toString [_x]); };
	};
}
forEach (toArray _input);
_output
