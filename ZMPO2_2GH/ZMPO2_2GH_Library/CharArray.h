#pragma once
#include "NUtils.h"

using namespace std;

class CCharArray
{
private:
	char* val = 0;
	int length;
<<<<<<< HEAD

=======
	int sign;
>>>>>>> origin/master

	int filterSign(char *aInTable);

	vector<char>* acceptedValues;
	char* filterWrongCharsWithVector(int length, char *aInTable);
<<<<<<< HEAD
protected:
	int GetLength();
	int sign;
=======
>>>>>>> origin/master

public:
	virtual char* GetVal();
	virtual int GetSign();

	CCharArray(vector<char>* acceptedValues, char length, char* val);	
	virtual ~CCharArray();
};
