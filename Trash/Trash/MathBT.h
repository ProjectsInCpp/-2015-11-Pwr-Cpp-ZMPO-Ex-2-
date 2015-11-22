#pragma once
namespace CMath
{
	void zeroTable(int aSize, char* aValues);
	char* Add(char inBase, char aLength1, char* aValUp, char aLength2, char* aValDown);
	char* AddZM(char inBase, char aSignUp, char aLengthUp, char* aValUp, char aSignDown, char aLengthDown, char* aValDown);
	int Subtract(int aVal0, int aVal1);
	int Multiply(int aVal0, int aVal1);
	int Ratio(int aDividend, int aDivisor);
	int Modulo(int aDividend, int aDivisor);
};

