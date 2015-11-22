#include "stdafx.h"
#include "LanguageAndBaseAndLengthAndSignAndValue.h"

#pragma region ****************************** CTORSAndDTORS ***************************

CLanguageAndBaseAndLengthAndSignAndValue::CLanguageAndBaseAndLengthAndSignAndValue(
	char aLength,
	char* aInArray,
	char aSign,
	char aBase
	)
{
	SetVal(new char[0]);
	SetBase(new CIntValue(ToEqualsInt(aBase)));
	SetLength(new CIntValue(ToEqualsInt(aLength)));
	SetSign(new CIntValue(ToEqualsSign(aSign)));

	zeroTable(GetLength(), GetVal());
	filterWrongChars(aInArray, GetLength(), 0, GetVal());
}

//CLanguageAndBaseAndLengthAndSignAndValue* calculate(CLanguageAndBaseAndLengthAndSignAndValue aVal1,
//  CLanguageAndBaseAndLengthAndSignAndValue aVal2,
//  int inCommand)
//{
//  return new CLanguageAndBaseAndLengthAndSignAndValue();
//}

char* CLanguageAndBaseAndLengthAndSignAndValue::chooseOperation(int aInCommand)
{
	char *retVal;

	switch (aInCommand) {
	case 1:
		retVal = "00000Add";
		break;
	case 2:
		retVal = "Subtract";
		break;
	case 3:
		retVal = "Multiply";
		break;
	default:
		break;
	}

	return retVal;
}
CLanguageAndBaseAndLengthAndSignAndValue::~CLanguageAndBaseAndLengthAndSignAndValue()
{
	delete _sign;
	_sign = 0;

	delete _array;
	_array = 0;

	delete _length;
	_length = 0;

	delete _base;
	_base = 0;
}

#pragma endregion
#pragma region ****************************** Getters *************************

int CLanguageAndBaseAndLengthAndSignAndValue::GetBase()
{
	return _base->GetVal();
}

int CLanguageAndBaseAndLengthAndSignAndValue::GetLength()
{
	return _length->GetVal();
}

int CLanguageAndBaseAndLengthAndSignAndValue::GetSign()
{
	return _sign->GetVal();
}

char* CLanguageAndBaseAndLengthAndSignAndValue::GetVal()
{
	return _array;
}

#pragma endregion
#pragma region ****************************** SETTERS ***************************

void CLanguageAndBaseAndLengthAndSignAndValue::SetBase(CIntValue* aBase)
{
	_base = aBase;
}

void CLanguageAndBaseAndLengthAndSignAndValue::SetSign(CIntValue* aSign)
{
	_sign = aSign;
}

void CLanguageAndBaseAndLengthAndSignAndValue::SetLength(CIntValue* aLength)
{
	_length = aLength;
}

void CLanguageAndBaseAndLengthAndSignAndValue::SetVal(char *aInArray)
{
	_array = aInArray;
}

#pragma endregion