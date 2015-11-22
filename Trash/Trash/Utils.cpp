#include "stdafx.h"
#include "Utils.h"
#include <iostream>
#include "MathBT.h"
#include "UtilsArray.h"

using namespace CUtilsArray;
using namespace std;

int CUtils::ToEqualsInt(char aValue0)
{
	return int(aValue0) - 48;
}

int CUtils::charToint(char aIn)
{
	return int(aIn) - 48;
}

char CUtils::charTobigChar(char aIn)
{
	return char(toupper(aIn));
}

char* CUtils::hexaTobinary(char aLength, char* aInHexa)
{
	// created table for it
	int _binaryLength = ToEqualsInt(aLength) * 4;
	int _hexaLength = ToEqualsInt(aLength);
	char *retTable = new char[_binaryLength];
	char *upperedInTable = new char[_hexaLength];
	char *filteredInTable = new char[_hexaLength];

	upperTable(_hexaLength, aInHexa, _hexaLength, upperedInTable);

	zeroTable(_binaryLength, retTable);
	zeroTable(_hexaLength, filteredInTable);

	filterWrongCharsFromHexa(upperedInTable, _hexaLength, 0, filteredInTable);

	return retTable;
}
char* CUtils::binaryTohexa(char aLength, char* aInBinary)
{
	char *retTable = new char[0];
	return retTable;
}

int CUtils::ToEqualsNumberIntFromHexa(char aValue0)
{
	return int(aValue0) - 55;
}

char CUtils::ToEqualsChar(int aValue0)
{
	return char(aValue0 + 48);
}

int CUtils::ToEqualsSign(char aValue0)
{
	int retVal = 1;

	if (aValue0 == '-')
		retVal = -1;

	return retVal;
}

//char CUtils::AsciiPackageForMathAdd(char aValue0, char aValue1)
//{
//  int buffASCII0 = int(aValue0);
//  int buffASCII1 = int(aValue1);
//  
//  int buffNumericAdditional = CMath::Add(ToEqualsInt(buffASCII0), ToEqualsInt(buffASCII1));
//
//  char outCharVal = ASCII_BASE + char(buffNumericAdditional);
//
//  return outCharVal;
//}
//
//char CUtils::AsciiPackageForMathSubtract(char aValue0, char aValue1)
//{
//  int buffASCII0 = int(aValue0);
//  int buffASCII1 = int(aValue1);
//
//  int buffASCIIToNumeric0 = buffASCII0 - ASCII_BASE;
//  int buffASCIIToNumeric1 = buffASCII1 - ASCII_BASE;;
//
//  int buffNumericAdditional = CMath::Subtract(buffASCIIToNumeric0, buffASCIIToNumeric1);
//
//  char outCharVal = ASCII_BASE + char(buffNumericAdditional);
//
//  return outCharVal;
//}
//
//char CUtils::AsciiPackageForMathMultiply(char aValue0, char aValue1)
//{
//  int buffASCII0 = int(aValue0);
//  int buffASCII1 = int(aValue1);
//
//  int buffASCIIToNumeric0 = buffASCII0 - ASCII_BASE;
//  int buffASCIIToNumeric1 = buffASCII1 - ASCII_BASE;;
//
//  int buffNumericAdditional = CMath::Multiply(buffASCIIToNumeric0, buffASCIIToNumeric1);
//
//  char outCharVal = ASCII_BASE + char(buffNumericAdditional);
//
//  return outCharVal;
//}
