#include "stdafx.h"
#include "IntValue.h"

CIntValue::CIntValue(int aVal)
{
	SetVal(aVal);
}

CIntValue::CIntValue()
{
	SetVal(0);
}

int CIntValue::GetVal()
{
	return _val;
}

void CIntValue::SetVal(int aVal)
{
	_val = aVal;
}