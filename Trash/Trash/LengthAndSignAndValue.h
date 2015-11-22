#pragma once
#include "Helper\Utils.h"
#include "IntValue.h"
using namespace CUtils;

class CLengthAndSignAndValue
{
private:
	char* _val;
	CIntValue* _length;
	CIntValue* _sign;

	void zeroTable();
	void injectNSizeDynamicTable();
	void filterWrongChars(char *aInTable);

public:

	// ************************** charERFACE *********************
	char* GetVal();
	void SetVal(char* aVal);

	void SetLength(char aLength);
	int GetLength();

	void SetSign(char aVal);
	int GetSign();

	// ************************** CTORS ? DTORS *****************
	CLengthAndSignAndValue();
	CLengthAndSignAndValue(char aLength);
	CLengthAndSignAndValue(char aLength, char* aVal);
	CLengthAndSignAndValue(char aLength, char aSign, char* aVal);


	virtual ~CLengthAndSignAndValue();
};

//
//char* Add(char *aVal);
//char* Substract(char *aVal);
//char* Multiply(char *aVal);