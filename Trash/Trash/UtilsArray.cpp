#include "stdafx.h"
#include "UtilsArray.h"

char CUtilsArray::zeroTableUnit(char aIn)
{
	return '0';
}

void CUtilsArray::zeroTable(int aLength, char* aInTable)
{
	for (int i = 0; i < aLength; i++)
		aInTable[i] = '0';
}

void CUtilsArray::filterWrongChars(char* aInTable,
	int aLength,
	int aSubtractOfMaxAndUpLength,
	char* aGoalTable)
{
	char conditionalChar = '0';

	for (int i = aLength - 1; i >-1; i--)
	{
		int iGoal = i + aSubtractOfMaxAndUpLength;

		char tempVal = aInTable[i];

		if (tempVal != conditionalChar)
		{
			aGoalTable[iGoal] = tempVal;
		}
	}
}

void CUtilsArray::upperTable(int aLength1, char* aTable1, int aLength2, char* aTable2)
{
	for (int i = 0; i < aLength1; i++)
	{
		aTable2[i] = charTobigChar(aTable1[i]);
	}
}

void CUtilsArray::filterWrongCharsFromHexa(char* aInTable, int aLength, int aSubtractOfMaxAndUpLength, char* aGoalTable)
{

}

char CUtilsArray::idx(char aChar)
{
	return aChar;
}

void CUtilsArray::engineFromLeftPure(char(*aFun)(char), int aInLength, char* aInTable, char* aOutTable)
{
	for (int i = 0; i < aInLength; i++)
	{
		aOutTable[i] = (*aFun)(aInTable[i]);
	}
}
void CUtilsArray::engineFromRightPure(char(*aFun)(char), int aInLength, char* aInTable, char* aOutTable)
{
	for (int i = aInLength - 1; i > -1; i--)
	{
		aOutTable[i] = (*aFun)(aInTable[i]);
	}
}

char* CUtilsArray::engineFromLeft(char(*aFun)(char), int aInLength, char* aInTable)
{
	char* retTable = new char[aInLength];

	for (int i = aInLength - 1; i > -1; i--)
	{
		retTable[i] = (*aFun)(aInTable[i]);
	}

	return retTable;
}

char* CUtilsArray::engineFromRight(char(*aFun)(char), int aInLength, char* aInTable)
{
	char* retTable = new char[aInLength];

	for (int i = aInLength - 1; i > -1; i--)
	{
		retTable[i] = (*aFun)(aInTable[i]);
	}

	return retTable;
}

char* CUtilsArray::hexaTodecimalUnit(char aInChar)
{
	char* aOutDecimal = new char[2];

	switch (aInChar)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = aInChar;
		break;
	}
	case 'A':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		break;
	}
	case 'B':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		break;
	}
	case 'C':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '2';
		break;
	}
	case 'D':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '3';
		break;
	}
	case 'E':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '4';
		break;
	}
	case 'F':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '5';
		break;
	}
	default:
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
	};
	}

	return aOutDecimal;
}

char* CUtilsArray::hexaTobinArrUnit(char aInChar)
{
	char* aOutDecimal = new char[4];

	switch (aInChar)
	{

	case '0':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case '1':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case '2':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case '3':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	case '4':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case '5':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case '6':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case '7':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	case '8':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case '9':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case 'A':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case 'B':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	case 'C':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case 'D':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case 'E':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case 'F':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	default:
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
	};
	}

	return aOutDecimal;
}

char* CUtilsArray::intTomainOperation(int aOperation)
{
	char *retMainOperation = new char[4];

	switch (aOperation)
	{
	case 1:
	{
		retMainOperation = "ADDTo";
		break;
	}
	case 2:
	{
		retMainOperation = "SUBTo";
		break;
	}
	case 3:
	{
		retMainOperation = "MULTo";
		break;
	}
	default:
	{
		retMainOperation = "NIL";
	}
	};

	return retMainOperation;
}

char* CUtilsArray::intTomainOperationDeeper(int aInOperation, char aInSign1, char aInSign2, char aSwap)
{
	int aLength = 9;
	int signCode = singAndsignTocode(aInSign1, aInSign2);

	char *retMainOperation = new char[aLength];

	if (aInOperation == 1 && signCode == 2 && aSwap == 'T')
	{
		retMainOperation = "ADDToSUBT+";
	}// 4
	else if (aInOperation == 1 && signCode == 3 && aSwap == 'T')
	{
		retMainOperation = "ADDToADDT-";
	}// 5
	else if (aInOperation == 1 && signCode == 4 && aSwap == 'T')
	{
		retMainOperation = "ADDToADDT+";
	}// 6
	else if (aInOperation == 1 && signCode == 2 && aSwap == 'F')
	{
		retMainOperation = "ADDToSUBF-";
	}// 1
	else if (aInOperation == 1 && signCode == 3 && aSwap == 'F')
	{
		retMainOperation = "ADDToSUBF+";
	}// 3
	else if (aInOperation == 1 && signCode == 4 && aSwap == 'F')
	{
		retMainOperation = "ADDToADDF+";
	}// 2
	else if (aInOperation == 1 && signCode == 1 && aSwap == 'F')
	{
		retMainOperation = "ADDToADDF-";
	}// 7(aInOperation == 1 && signCode == 1 && aSwap == 'F')
	else if (aInOperation == 1 && signCode == 1 && aSwap == 'T')
	{
		retMainOperation = "ADDToADDT-";
	}// 8(aInOperation == 1 && signCode == 1 && aSwap == 'F')

	if (aInOperation == 2 && signCode == 2 && aSwap == 'T')
	{
		retMainOperation = "SUBToADDT-";
	}// 4
	else if (aInOperation == 2 && signCode == 3 && aSwap == 'T')
	{
		retMainOperation = "SUBToADDT+";
	}// 5
	else if (aInOperation == 2 && signCode == 4 && aSwap == 'T')
	{
		retMainOperation = "SUBToSUBT-";
	}// 6
	else if (aInOperation == 2 && signCode == 2 && aSwap == 'F')
	{
		retMainOperation = "SUBToADDF-";
	}// 1
	else if (aInOperation == 2 && signCode == 3 && aSwap == 'F')
	{
		retMainOperation = "SUBToADDF+";
	}// 3
	else if (aInOperation == 2 && signCode == 4 && aSwap == 'F')
	{
		retMainOperation = "SUBToSUBF+";
	}// 2
	else if (aInOperation == 2 && signCode == 1 && aSwap == 'F')
	{
		retMainOperation = "SUBToSUBF-";
	}// 7
	else if (aInOperation == 2 && signCode == 1 && aSwap == 'T')
	{
		retMainOperation = "SUBToSUBT+";
	}// 8(aInOperation == 1 && signCode == 1 && aSwap == 'F')

	if (aInOperation == 3 && (signCode == 1 || signCode == 4))
	{
		retMainOperation = "MULToADDL+";
	}
	else if (aInOperation == 3 && (signCode == 2 || signCode == 3))
	{
		retMainOperation = "MULToADDL-";
	}

	//zeroTable(aLength, retMainOperation);

	return retMainOperation;
}

int CUtilsArray::singAndsignTocode(char aSign1, char aSign2)
{
	int signCode = 0;

	if (aSign1 == '-' && aSign2 == '-') signCode = 1;
	else if (aSign1 == '-' && aSign2 == '+') signCode = 2;
	else if (aSign1 == '+' && aSign2 == '-') signCode = 3;
	else if (aSign1 == '+' && aSign2 == '+') signCode = 4;

	return signCode;
}
