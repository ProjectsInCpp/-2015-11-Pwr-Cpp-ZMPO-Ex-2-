#pragma once
#include "Helper\Utils.h"
#include "IntValue.h"
using namespace CUtils;

class CBaseAndLengthAndSignAndValue
{
private:
	char* _val;
	CIntValue* _length;
	CIntValue* _sign;
	CIntValue* _base;

	void zeroTable(char *aInTable);
	char* filterWrongChars(char *aInTable, int aSize);
	void SetVal(char* aVal);
	void SetBase(CIntValue* aBase);
	void SetSign(CIntValue* aSign);
	void SetLength(CIntValue* aLength);

	// ************************** extracted **********************

public:

	// ************************** charERFACE *********************
	char* GetVal();
	int GetLength();
	int GetBase();
	int GetSign();

	// ************************** CTORS ? DTORS *****************
	CBaseAndLengthAndSignAndValue();
	CBaseAndLengthAndSignAndValue(char aLength);
	CBaseAndLengthAndSignAndValue(char aBase, char aLength, char* aVal);
	CBaseAndLengthAndSignAndValue(char aBase, char aLength, char aSign, char* aVal);

	virtual ~CBaseAndLengthAndSignAndValue();
};

//
//char* Add(char *aVal);
//char* Substract(char *aVal);
//char* Multiply(char *aVal);