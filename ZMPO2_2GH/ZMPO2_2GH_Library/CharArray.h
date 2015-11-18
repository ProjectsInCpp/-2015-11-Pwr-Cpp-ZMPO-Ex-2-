#pragma once
#include "NUtils.h"

using namespace std;

class CCharArray
{
private:
	char* val = 0;
	int length;
	int sign;

	int filterSign(char *aInTable);

	vector<char>* acceptedValues;
	char* filterWrongCharsWithVector(int length, char *aInTable);

public:
	virtual char* GetVal();
	virtual int GetSign();

	CCharArray(vector<char>* acceptedValues, char length, char* val);	
	virtual ~CCharArray();
};
