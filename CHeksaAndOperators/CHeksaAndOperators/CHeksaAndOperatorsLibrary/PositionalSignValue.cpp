#include "stdafx.h"
#include "PositionalSignValue.h"

CPositionalSignValue::CPositionalSignValue(vector<char>* acceptedValues, char length, char * val)
	: CCharArray(acceptedValues, length, val)
{

}