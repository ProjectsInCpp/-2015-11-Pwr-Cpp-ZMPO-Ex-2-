#include "stdafx.h"
#include "BoolValue.h"

CBoolValue::CBoolValue(bool aVal)
{
	_val = aVal;
}

CBoolValue::CBoolValue()
{
	_val = 0;
}

CBoolValue::CBoolValue(const CBoolValue & aVal)
{
	_val = aVal._val;
}

CBoolValue & CBoolValue::operator!()
{
	!_val;
	return *this;
}

bool CBoolValue::operator==(const CBoolValue &aVal)
{
	return _val == aVal._val;
}