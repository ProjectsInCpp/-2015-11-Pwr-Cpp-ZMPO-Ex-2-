#include "stdafx.h"
#include "Hex.h"

CHex::CHex(char length, char* val) : CPositionalSignValue(
	new vector<char>{ '1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','\0' },
	length,
	val)
{

}