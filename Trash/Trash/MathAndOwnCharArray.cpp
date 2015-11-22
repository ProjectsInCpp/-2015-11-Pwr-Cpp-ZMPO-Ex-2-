#include "stdafx.h"
#include <math.h>
#include "Helper\UtilsArray.h"
#include "MathAndOwnCharArray.h"


using namespace CUtilsArray;

char* CMathAndOwnCharArray::AddZM(CLanguageAndBaseAndLengthAndSignAndValue* aValUp, CLanguageAndBaseAndLengthAndSignAndValue* aValDown)
{
	// calculating maximum size of table to collect all
	int lengthUp = aValUp->GetLength();
	int lengthDown = aValDown->GetLength();
	int maxLength = (lengthUp > lengthDown) ? lengthUp + 1 : lengthDown + 1;
	int subtractOfMaxAndUpSize = maxLength - lengthUp;
	int subtractOfMaxAndDownSize = maxLength - lengthDown;
	int base = aValUp->GetBase();

	// creating And zero suitable buffers
	char* buffUp = new char[maxLength];
	char* buffDown = new char[maxLength];
	char* buffOut = new char[maxLength];
	char* buffHelp = new char[maxLength];

	//engineFromRight(idx, maxLength, alowerTable, destinyTable);
	//zeroTable(maxLength, buffUp);
	//zeroTable(maxLength, buffDown);
	//zeroTable(maxLength, buffOut);
	//zeroTable(maxLength, buffHelp);

	// missing Wrong Chars with '0'
	filterWrongChars(aValUp->GetVal(), maxLength, subtractOfMaxAndUpSize, buffUp);
	filterWrongChars(aValDown->GetVal(), maxLength, subtractOfMaxAndUpSize, buffDown);

	// adding
	for (int i = maxLength - 1; i >-1; i--)
	{
		int up = charToint(buffUp[i]);
		int down = charToint(buffDown[i]);

		// constant operations with added divide by zero
		int total = down == 0 ? 0 : up / down;
		int module = down == 0 ? up : abs(up - down); // 0 mod 1 != 1

													  //// reachedIvalue
		int reachedValue = ToEqualsInt(buffHelp[i]) + module;

		// reachedValueWithBase
		if ((reachedValue / base) != 0)
		{
			int reachedWholes = reachedValue / base;
			int reachedMods = reachedValue % base;

			// reachedOverflow
			buffHelp[i - 1] = ToEqualsChar(reachedWholes);
			// writing result
			buffOut[i] = ToEqualsChar(reachedMods);
		}
		else
		{
			// reachedOverflow
			buffHelp[i - 1] = ToEqualsChar(total);
			// writing result
			buffOut[i] = ToEqualsChar(reachedValue);
		}
	}

	return buffOut;
}

CLanguageAndBaseAndLengthAndSignAndValue* CMathAndOwnCharArray::AddZMClass(CLanguageAndBaseAndLengthAndSignAndValue* aValUp, CLanguageAndBaseAndLengthAndSignAndValue* aValDown)
{
	CLanguageAndBaseAndLengthAndSignAndValue* _retVal = new CLanguageAndBaseAndLengthAndSignAndValue();

	// calculating maximum size of table to collect all
	int lengthUp = aValUp->GetLength();
	int lengthDown = aValDown->GetLength();
	int maxLength = (lengthUp > lengthDown) ? lengthUp + 1 : lengthDown + 1;
	int subtractOfMaxAndUpSize = maxLength - lengthUp;
	int subtractOfMaxAndDownSize = maxLength - lengthDown;
	int base = aValUp->GetBase();

	// creating And zero suitable buffers
	char* buffUp = new char[maxLength];
	char* buffDown = new char[maxLength];
	char* buffOut = new char[maxLength];
	char* buffHelp = new char[maxLength];

	zeroTable(maxLength, buffUp);
	zeroTable(maxLength, buffDown);
	zeroTable(maxLength, buffOut);
	zeroTable(maxLength, buffHelp);

	// missing Wrong Chars with '0'
	filterWrongChars(aValUp->GetVal(), maxLength, subtractOfMaxAndUpSize, buffUp);
	filterWrongChars(aValDown->GetVal(), maxLength, subtractOfMaxAndUpSize, buffDown);

	// adding
	for (int i = maxLength - 1; i >-1; i--)
	{
		int up = charToint(buffUp[i]);
		int down = charToint(buffDown[i]);

		// constant operations with added divide by zero
		int total = down == 0 ? 0 : up / down;
		int module = down == 0 ? up : abs(up - down); // 0 mod 1 != 1

													  //// reachedIvalue
		int reachedValue = ToEqualsInt(buffHelp[i]) + module;

		// reachedValueWithBase
		if ((reachedValue / base) != 0)
		{
			int reachedWholes = reachedValue / base;
			int reachedMods = reachedValue % base;

			// reachedOverflow
			buffHelp[i - 1] = ToEqualsChar(reachedWholes);
			// writing result
			buffOut[i] = ToEqualsChar(reachedMods);
		}
		else
		{
			// reachedOverflow
			buffHelp[i - 1] = ToEqualsChar(total);
			// writing result
			buffOut[i] = ToEqualsChar(reachedValue);
		}
	}

	return _retVal;
}

char* CMathAndOwnCharArray::MinusZM(CLanguageAndBaseAndLengthAndSignAndValue* aValUp, CLanguageAndBaseAndLengthAndSignAndValue* aValDown)
{
	// calculating maximum size of table to collect all
	int lengthUp = aValUp->GetLength();
	int lengthDown = aValDown->GetLength();
	int maxLength = (lengthUp > lengthDown) ? lengthUp + 1 : lengthDown + 1;
	int subtractOfMaxAndUpSize = maxLength - lengthUp;
	int subtractOfMaxAndDownSize = maxLength - lengthDown;

	// creating And zero suitable buffers
	char* buffUp = new char[maxLength];
	char* buffDown = new char[maxLength];
	char* buffOut = new char[maxLength];
	char* buffHelp = new char[maxLength];

	zeroTable(maxLength, buffUp);
	zeroTable(maxLength, buffDown);
	zeroTable(maxLength, buffOut);
	zeroTable(maxLength, buffHelp);

	// missing Wrong Chars with '0'
	filterWrongChars(aValUp->GetVal(), maxLength, subtractOfMaxAndUpSize, buffUp);
	filterWrongChars(aValDown->GetVal(), maxLength, subtractOfMaxAndUpSize, buffDown);

	// adding
	for (int i = maxLength - 1; i > -1; i--)
	{
		char result = helper(buffUp, buffDown, buffHelp, i);
		buffOut[i] = ToEqualsChar(result);
	}

	return buffOut;
}

char CMathAndOwnCharArray::helper(char *inBuffUp, char* inBuffDown, char *inBuffHelp, int aI)
{
	int up = charToint(inBuffUp[aI]);
	int down = charToint(inBuffDown[aI]);

	int module = abs(up - down);
	int reachedValue = 0;

	// buff help
	if (inBuffHelp[aI] == '0' && up == 0 && down == 0) {}
	else
		if (inBuffHelp[aI] == '0')
		{
			if (module == 1 && up == 0)
			{
				inBuffHelp[aI - 1] = '1';
				reachedValue = 1;
			}
			else if (module == 1)
			{
				reachedValue = 1;
			}
		}
		else
		{
			inBuffHelp[aI - 1] = '1';
			reachedValue = 1;

			if (module == 1 && down == 0)
			{
				reachedValue = 0;
				inBuffHelp[aI - 1] = '0';
			}
			else
				if (module == 1)
				{
					reachedValue = 0;
				}
		}

	return reachedValue;
}
//
//char* CMathAndOwnCharArray::Add(char inBase, char aLength1, char* aValUp, char aLength2, char* aValDown)
//{
//  // calculating maximum size of table to collect all
//  int lengthUp = ToEqualsInt(aLength1);
//  int lengthDown = ToEqualsInt(aLength2);
//  int maxLength = (lengthUp > lengthDown) ? lengthUp + 1 : lengthDown + 1;
//  int subtractOfMaxAndUpSize = maxLength - lengthUp;
//  int subtractOfMaxAndDownSize = maxLength - lengthDown;
//  int base = ToEqualsInt(inBase);
//
//  // creating suitable valbuffUp
//  char* buffUp = new char[maxLength];
//
//  // creating suitable valbuffDown
//  char* buffDown = new char[maxLength];
//
//  // creating suitable buffOut
//  char* buffOut = new char[maxLength];
//
//  // creating suitable OverFlowBuff/Inssufficient
//  char* buffHelp = new char[maxLength];
//
//  // zero-out buffOut
//  for (int i = 0; i <maxLength; i++)
//    buffOut[i] = '0';
//
//  // zero-out buffHelp
//  for (int i = 0; i <maxLength; i++)
//    buffHelp[i] = '0';
//
//  // zero-out buffUp
//  for (int i = 0; i <maxLength; i++)
//    buffUp[i] = '0';
//
//  // zero-out buffDown
//  for (int i = 0; i <maxLength; i++)
//    buffDown[i] = '0';
//
//  // rewriting upValue
//  for (int i = lengthUp - 1; i >-1; i--)
//  {
//    int iGoal = i + subtractOfMaxAndUpSize;
//
//    char tempVal = aValUp[i];
//
//    if (tempVal == '1' || tempVal == '0')
//    {
//      buffUp[iGoal] = tempVal;
//    }
//    else
//    {
//      buffUp[iGoal] = '0';
//    }
//  }
//
//  // rewriting downValue
//  for (int i = lengthDown - 1; i >-1; i--)
//  {
//    int iGoal = i + subtractOfMaxAndDownSize;
//
//    char tempVal = aValDown[i];
//
//    if (tempVal == '1' || tempVal == '0')
//    {
//      buffDown[iGoal] = tempVal;
//    }
//    else
//    {
//      buffDown[iGoal] = '0';
//    }
//  }
//
//  // adding
//  for (int i = maxLength - 1; i >-1; i--)
//  {
//    // redundant rewrite
//    int up = ToEqualsInt(buffUp[i]);
//    int down = ToEqualsInt(buffDown[i]);
//
//    // constant operations with added divide by zero
//    int total = down == 0 ? 0 : up / down;
//    int module = down == 0 ? up : abs(up - down); // 0 mod 1 != 1
//
//    //// reachedIvalue
//    int reachedValue = ToEqualsInt(buffHelp[i]) + module;
//
//    // reachedValueWithBase
//    if ((reachedValue / base) != 0)
//    {
//      int reachedWholes = reachedValue / base;
//      int reachedMods = reachedValue % base;
//
//      // reachedOverflow
//      buffHelp[i - 1] = ToEqualsChar(reachedWholes);
//
//      // writing result
//      buffOut[i] = ToEqualsChar(reachedMods);
//    }
//    else
//    {
//      // reachedOverflow
//      buffHelp[i - 1] = ToEqualsChar(total);
//
//      // writing result
//      buffOut[i] = ToEqualsChar(reachedValue);
//    }
//  }
//
//  return buffOut;
//}

int CMathAndOwnCharArray::Subtract(int aVal0, int aValUp)
{
	return aVal0 - aValUp;
}

int CMathAndOwnCharArray::Multiply(int aVal0, int aValUp)
{
	return aVal0 * aValUp;
}

int CMathAndOwnCharArray::Ratio(int aDividend, int aDivisor)
{
	return aDividend / aDivisor;
}

int CMathAndOwnCharArray::Modulo(int aDividend, int aDivisor)
{
	return aDividend % aDivisor;
}
