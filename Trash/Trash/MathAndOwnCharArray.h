#pragma once
#include "Helper\Utils.h"
#include "LanguageAndBaseAndLengthAndSignAndValue.h"

namespace CMathAndOwnCharArray
{
	char* AddZM(CLanguageAndBaseAndLengthAndSignAndValue* aValUp, CLanguageAndBaseAndLengthAndSignAndValue* aValDown);
	CLanguageAndBaseAndLengthAndSignAndValue* AddZMClass(CLanguageAndBaseAndLengthAndSignAndValue* aValUp, CLanguageAndBaseAndLengthAndSignAndValue* aValDown);
	char* MinusZM(CLanguageAndBaseAndLengthAndSignAndValue* aValUp, CLanguageAndBaseAndLengthAndSignAndValue* aValDown);
	char helper(char *inBuffUp, char* inBuffDown, char *inBuffHelp, int aI);

	int Subtract(int aVal0, int aVal1);
	int Multiply(int aVal0, int aVal1);
	int Ratio(int aDividend, int aDivisor);
	int Modulo(int aDividend, int aDivisor);
};

