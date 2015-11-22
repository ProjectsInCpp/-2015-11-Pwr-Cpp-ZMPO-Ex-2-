#include "stdafx.h"
#include "MathBT.h"
#include "Utils.h"
#include <math.h>



void zeroTable(int aSize, char* aValues)
{
	int length = ToEqualsInt(aSize);

	for (int i = 0; i < length; i++)
	{
		aValues[i] = '0';
	}
}
char* CMath::AddZM(char inBase, char aSignUp, char aLengthUp, char* aValUp, char aSignDown, char aLengthDown, char* aValDown)
{
	// calculating maximum size of table to collect all
	int lengthOf1 = ToEqualsInt(aLengthUp);
	int lengthOf2 = ToEqualsInt(aLengthDown);
	int maxLength = (lengthOf1 > lengthOf2) ? lengthOf1 + 1 : lengthOf2 + 1;
	int subtractOfMaxAnd1Size = maxLength - lengthOf1;
	int subtractOfMaxAnd2Size = maxLength - lengthOf2;
	int base = ToEqualsInt(inBase);

	// creating suitable valUpBuff
	char* upBuff = new char[maxLength];

	// creating suitable valDownBuff
	char* downBuff = new char[maxLength];

	// creating suitable outBuff
	char* outBuff = new char[maxLength];

	// creating suitable OverFlowBuff/Inssufficient
	char* helpBuff = new char[maxLength];

	// zero-out outBuff
	for (int i = 0; i <maxLength; i++)
		outBuff[i] = '0';

	// zero-out helpBuff
	for (int i = 0; i <maxLength; i++)
		helpBuff[i] = '0';

	// zero-out upBuff
	for (int i = 0; i <maxLength; i++)
		upBuff[i] = '0';

	// zero-out downBuff
	for (int i = 0; i <maxLength; i++)
		downBuff[i] = '0';

	// rewriting upValue
	for (int i = lengthOf1 - 1; i >-1; i--)
	{
		int iGoal = i + subtractOfMaxAnd1Size;

		char tempVal = aValUp[i];

		if (tempVal == '1' || tempVal == '0')
		{
			upBuff[iGoal] = tempVal;
		}
		else
		{
			upBuff[iGoal] = '0';
		}
	}

	// rewriting downValue
	for (int i = lengthOf2 - 1; i >-1; i--)
	{
		int iGoal = i + subtractOfMaxAnd2Size;

		char tempVal = aValDown[i];

		if (tempVal == '1' || tempVal == '0')
		{
			downBuff[iGoal] = tempVal;
		}
		else
		{
			downBuff[iGoal] = '0';
		}
	}

	// adding
	for (int i = maxLength - 1; i >-1; i--)
	{
		// redundant rewrite
		int up = ToEqualsInt(upBuff[i]);
		int down = ToEqualsInt(downBuff[i]);

		// constant operations with added divide by zero
		int total = down == 0 ? 0 : up / down;
		int module = down == 0 ? up : abs(up - down); // 0 mod 1 != 1

													  //// reachedIvalue
		int reachedValue = ToEqualsInt(helpBuff[i]) + module;

		// reachedValueWithBase
		if ((reachedValue / base) != 0)
		{
			int reachedWholes = reachedValue / base;
			int reachedMods = reachedValue % base;

			// reachedOverflow
			helpBuff[i - 1] = ToEqualsChar(reachedWholes);

			// writing result
			outBuff[i] = ToEqualsChar(reachedMods);
		}
		else
		{
			// reachedOverflow
			helpBuff[i - 1] = ToEqualsChar(total);

			// writing result
			outBuff[i] = ToEqualsChar(reachedValue);
		}
	}

	return outBuff;
}

char* CMath::Add(char inBase, char aLength1, char* aValUp, char aLength2, char* aValDown)
{
	// calculating maximum size of table to collect all
	int lengthOf1 = ToEqualsInt(aLength1);
	int lengthOf2 = ToEqualsInt(aLength2);
	int maxLength = (lengthOf1 > lengthOf2) ? lengthOf1 + 1 : lengthOf2 + 1;
	int subtractOfMaxAnd1Size = maxLength - lengthOf1;
	int subtractOfMaxAnd2Size = maxLength - lengthOf2;
	int base = ToEqualsInt(inBase);

	// creating suitable valUpBuff
	char* upBuff = new char[maxLength];

	// creating suitable valDownBuff
	char* downBuff = new char[maxLength];

	// creating suitable outBuff
	char* outBuff = new char[maxLength];

	// creating suitable OverFlowBuff/Inssufficient
	char* helpBuff = new char[maxLength];

	// zero-out outBuff
	for (int i = 0; i <maxLength; i++)
		outBuff[i] = '0';

	// zero-out helpBuff
	for (int i = 0; i <maxLength; i++)
		helpBuff[i] = '0';

	// zero-out upBuff
	for (int i = 0; i <maxLength; i++)
		upBuff[i] = '0';

	// zero-out downBuff
	for (int i = 0; i <maxLength; i++)
		downBuff[i] = '0';

	// rewriting upValue
	for (int i = lengthOf1 - 1; i >-1; i--)
	{
		int iGoal = i + subtractOfMaxAnd1Size;

		char tempVal = aValUp[i];

		if (tempVal == '1' || tempVal == '0')
		{
			upBuff[iGoal] = tempVal;
		}
		else
		{
			upBuff[iGoal] = '0';
		}
	}

	// rewriting downValue
	for (int i = lengthOf2 - 1; i >-1; i--)
	{
		int iGoal = i + subtractOfMaxAnd2Size;

		char tempVal = aValDown[i];

		if (tempVal == '1' || tempVal == '0')
		{
			downBuff[iGoal] = tempVal;
		}
		else
		{
			downBuff[iGoal] = '0';
		}
	}

	// adding
	for (int i = maxLength - 1; i >-1; i--)
	{
		// redundant rewrite
		int up = ToEqualsInt(upBuff[i]);
		int down = ToEqualsInt(downBuff[i]);

		// constant operations with added divide by zero
		int total = down == 0 ? 0 : up / down;
		int module = down == 0 ? up : abs(up - down); // 0 mod 1 != 1

													  //// reachedIvalue
		int reachedValue = ToEqualsInt(helpBuff[i]) + module;

		// reachedValueWithBase
		if ((reachedValue / base) != 0)
		{
			int reachedWholes = reachedValue / base;
			int reachedMods = reachedValue % base;

			// reachedOverflow
			helpBuff[i - 1] = ToEqualsChar(reachedWholes);

			// writing result
			outBuff[i] = ToEqualsChar(reachedMods);
		}
		else
		{
			// reachedOverflow
			helpBuff[i - 1] = ToEqualsChar(total);

			// writing result
			outBuff[i] = ToEqualsChar(reachedValue);
		}
	}

	return outBuff;
}

int CMath::Subtract(int aVal0, int aValUp)
{
	return aVal0 - aValUp;
}

int CMath::Multiply(int aVal0, int aValUp)
{
	return aVal0 * aValUp;
}

int CMath::Ratio(int aDividend, int aDivisor)
{
	return aDividend / aDivisor;
}
int CMath::Modulo(int aDividend, int aDivisor)
{
	return aDividend % aDivisor;
}
