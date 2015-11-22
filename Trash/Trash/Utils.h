#pragma once

#define ASCII_BASE 48

namespace CUtils
{
	int charToint(char aIn);
	char charTobigChar(char aIn);
	char* hexaTobinary(char aLength, char* aInHexa);
	char* binaryTohexa(char aLength, char* aInBinary);
	int ToEqualsInt(char aValue0);

	char ToEqualsChar(int aValue0);
	int ToEqualsSign(char aValue0);
	int ToEqualsNumberIntFromHexa(char aValue0);

	char AsciiPackageForMathAdd(char aValue0, char aValue1);
	char AsciiPackageForMathSubtract(char aValue0, char aValue1);
	char AsciiPackageForMathMultiply(char aValue0, char aValue1);
};

