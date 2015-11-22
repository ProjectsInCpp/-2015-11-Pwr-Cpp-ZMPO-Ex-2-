#include "stdafx.h"
#include "BaseAndLengthAndSignAndValue.h"

#pragma region ****************************** CTORSAndDTORS ***************************

CBaseAndLengthAndSignAndValue::CBaseAndLengthAndSignAndValue()
{
	SetBase(new CIntValue(ToEqualsInt('2')));
	SetSign(new CIntValue(ToEqualsSign('1')));
	SetLength(new CIntValue(ToEqualsInt('0')));
	SetVal(new char[GetLength()]);

	zeroTable(GetVal());
}

CBaseAndLengthAndSignAndValue::CBaseAndLengthAndSignAndValue(char aLength)
{
	SetBase(new CIntValue(ToEqualsSign('2')));
	SetSign(new CIntValue(ToEqualsSign('1')));
	SetLength(new CIntValue(ToEqualsInt(aLength)));
	SetVal(new char[GetLength()]);

	zeroTable(GetVal());
}

CBaseAndLengthAndSignAndValue::CBaseAndLengthAndSignAndValue(char aBase, char aLength, char* aVal)
{
	SetBase(new CIntValue(ToEqualsInt(aBase)));
	SetSign(new CIntValue(ToEqualsSign('1')));
	SetLength(new CIntValue(ToEqualsInt(aLength)));
	SetVal(new char[GetLength()]);

	zeroTable(GetVal());
	SetVal(filterWrongChars(aVal, GetLength()));
}

CBaseAndLengthAndSignAndValue::CBaseAndLengthAndSignAndValue(char aBase, char aLength, char aSign, char* aVal)
{
	SetBase(new CIntValue(ToEqualsInt(aBase)));
	SetSign(new CIntValue(ToEqualsSign(aSign)));
	SetLength(new CIntValue(ToEqualsInt(aLength)));
	SetVal(new char[GetLength()]);

	zeroTable(GetVal());
	SetVal(filterWrongChars(aVal, GetLength()));
}

CBaseAndLengthAndSignAndValue::~CBaseAndLengthAndSignAndValue()
{
	delete _sign;
	_sign = 0;

	delete _val;
	_val = 0;

	delete _length;
	_length = 0;

	delete _base;
	_base = 0;
}

#pragma endregion
#pragma region ****************************** PRIVATE_METHODS_PURE ***************************

void CBaseAndLengthAndSignAndValue::zeroTable(char *aInTable)
{
	for (int i = 0; i < GetLength(); i++)
		aInTable[i] = '0';
}

char* CBaseAndLengthAndSignAndValue::filterWrongChars(char *aInTable, int aSize)
{
	char emptySign = char(-3);
	char* returnedTable = new char[aSize];

	for (int i = GetLength() - 1; i >-1; i--)
	{
		char tempVal = aInTable[i];

		if (tempVal == '1' || tempVal == '0')
		{
			returnedTable[i] = tempVal;
		}
		else
		{
			returnedTable[i] = '0';
		}
	}

	return returnedTable;
}
//CLanguageAndBaseAndLengthAndSignAndValue
#pragma endregion
#pragma region ****************************** ACCESSORS *************************

int CBaseAndLengthAndSignAndValue::GetBase()
{
	return _base->GetVal();
}

int CBaseAndLengthAndSignAndValue::GetLength()
{
	return _length->GetVal();
}

int CBaseAndLengthAndSignAndValue::GetSign()
{
	return _sign->GetVal();
}

char* CBaseAndLengthAndSignAndValue::GetVal()
{
	return _val;
}

#pragma endregion
#pragma region ****************************** SETTERS ***************************

void CBaseAndLengthAndSignAndValue::SetBase(CIntValue* aBase)
{
	_base = aBase;
}

void CBaseAndLengthAndSignAndValue::SetSign(CIntValue* aSign)
{
	_sign = aSign;
}

void CBaseAndLengthAndSignAndValue::SetLength(CIntValue* aLength)
{
	_length = aLength;
}

void CBaseAndLengthAndSignAndValue::SetVal(char *aVal)
{
	_val = aVal;
}

#pragma endregion