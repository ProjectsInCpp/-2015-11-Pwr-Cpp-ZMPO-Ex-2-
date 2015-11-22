#include "stdafx.h"
#include "NBC.h"

CNBC::CNBC(char length, char* val) 
	: CPositionalSignValue(
	new vector<char>{ '1','\0' }, length, val)
{

}
