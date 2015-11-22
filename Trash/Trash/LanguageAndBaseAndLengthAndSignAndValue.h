#pragma once
#include "Helper\Utils.h"
#include "IntValue.h"
#include "Helper\UtilsArray.h"

using namespace CUtils;
using namespace CUtilsArray;

class CLanguageAndBaseAndLengthAndSignAndValue
{
private:
	char* _array;

	CIntValue* _length;
	CIntValue* _sign;
	CIntValue* _base;

protected:

	void SetBase(CIntValue* aBase);
	void SetSign(CIntValue* aSign);
	void SetLength(CIntValue* aLength);

public:

	// ************************** charERFACE *********************
	char* GetVal();
	int GetLength();
	int GetBase();
	int GetSign();
	void SetVal(char* aInArray);

	//static CLanguageAndBaseAndLengthAndSignAndValue* calculate(CLanguageAndBaseAndLengthAndSignAndValue aVal1,
	//                      CLanguageAndBaseAndLengthAndSignAndValue aVal2, 
	//                      int inCommand);

	static char* CLanguageAndBaseAndLengthAndSignAndValue::chooseOperation(int aInCommand);

	// ************************** CTORS ? DTORS *****************

	CLanguageAndBaseAndLengthAndSignAndValue(
		char aLength = '0',
		char* aInArray = new char[0],
		char aSign = '1',
		char aBase = '2'
		);

	virtual ~CLanguageAndBaseAndLengthAndSignAndValue();
};

//
//char* Add(char *aInArray);
//char* Substract(char *aInArray);
//char* Multiply(char *aInArray);