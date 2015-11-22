#pragma once
#include "Utils.h"
using namespace CUtils;

namespace CUtilsArray
{
	char* intTomainOperationDeeper(int aInOperation, char aInSign1, char aInSign2, char aSwap);
	char* intTomainOperation(int aOperation);
	char* hexaTodecimalUnit(char aInChar);
	char* hexaTobinArrUnit(char aInChar);
	int singAndsignTocode(char aSign1, char aSign2);
	char idx(char aChar);
	void engineFromLeftPure(char(*aFun)(char), int aInLength, char* aInTable, char* aOutTable);
	void engineFromRightPure(char(*aFun)(char), int aInLength, char* aInTable, char* aOutTable);
	char* engineFromLeft(char(*aFun)(char), int aInLength, char* aInTable);
	char* engineFromRight(char(*aFun)(char), int aInLength, char* aInTable);
	void upperTable(int aLength1, char* aTable1, int aLength2, char* aTable2);
	char zeroTableUnit(char aIn);
	void zeroTable(int aLength, char* aInTable);
	void filterWrongCharsFromHexa(char* aInTable, int aLength, int aSubtractOfMaxAndUpLength, char* aGoalTable);
	void filterWrongChars(char* aInTable, int aLength, int aSubtractOfMaxAndUpLength, char* aGoalTable);
	char* filterWrongChars(int aLength, int aSubtractOfMaxAndUpLength, char* aInTable);
};

