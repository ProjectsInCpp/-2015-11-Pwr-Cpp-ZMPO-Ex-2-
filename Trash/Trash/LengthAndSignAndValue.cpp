#include "stdafx.h"
#include "LengthAndSignAndValue.h"

#pragma region ****************************** CTORSAndDTORS ***************************

CLengthAndSignAndValue::CLengthAndSignAndValue()
{
	_sign = new CIntValue(ToEqualsSign('1'));
	_length = new CIntValue(ToEqualsInt('0'));
	injectNSizeDynamicTable();
	zeroTable();
}

CLengthAndSignAndValue::CLengthAndSignAndValue(char aLength)
{
	_sign = new CIntValue(ToEqualsSign('1'));
	_length = new CIntValue(ToEqualsInt(aLength));
	injectNSizeDynamicTable();
	zeroTable();
}

CLengthAndSignAndValue::CLengthAndSignAndValue(char aLength, char *aVal)
{
	_sign = new CIntValue(ToEqualsSign('1'));
	_length = new CIntValue(ToEqualsInt(aLength));
	injectNSizeDynamicTable();
	zeroTable();
	filterWrongChars(aVal);
}

CLengthAndSignAndValue::CLengthAndSignAndValue(char aLength, char aSign, char* aVal)
{
	_sign = new CIntValue(ToEqualsSign(aSign));
	_length = new CIntValue(ToEqualsInt(aLength));
	injectNSizeDynamicTable();
	zeroTable();
	filterWrongChars(aVal);
}

CLengthAndSignAndValue::~CLengthAndSignAndValue()
{
	delete _sign;
	_sign = 0;

	delete _val;
	_val = 0;

	delete _length;
	_length = 0;
}

#pragma endregion
#pragma region ****************************** PRIVATE_METHODS ***************************
void CLengthAndSignAndValue::injectNSizeDynamicTable()
{
	char *buffArgument = new char[GetLength()];
	_val = buffArgument;
}

void CLengthAndSignAndValue::zeroTable()
{
	for (int i = 0; i <GetLength(); i++)
	{
		GetVal()[i] = '0';
	}
}

void CLengthAndSignAndValue::filterWrongChars(char *aInTable)
{
	char emptySign = char(-3);

	for (int i = GetLength() - 1; i >-1; i--)
	{
		char tempVal = aInTable[i];

		if (tempVal == emptySign)
		{
			GetVal()[i] = '0';
		}
		else
		{
			GetVal()[i] = tempVal;
		}
	}
}
#pragma endregion
#pragma region ****************************** ACCESSORS ***************************
void CLengthAndSignAndValue::SetLength(char aLength)
{
	return _length->SetVal(ToEqualsInt(aLength));
}

int CLengthAndSignAndValue::GetLength()
{
	return _length->GetVal();
}

void CLengthAndSignAndValue::SetVal(char *aVal) /// TODO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
{
	// package

	char *buffArgument = new char[GetLength()];
	buffArgument = aVal;
	//

	this->_val = aVal;
}

char* CLengthAndSignAndValue::GetVal()
{
	return this->_val;
}

void CLengthAndSignAndValue::SetSign(char aVal)
{
	_sign->SetVal(ToEqualsSign(aVal));
}
int CLengthAndSignAndValue::GetSign()
{
	return _sign->GetVal();
}

#pragma endregion