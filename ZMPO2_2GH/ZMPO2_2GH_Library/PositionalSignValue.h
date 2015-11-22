#pragma once

#include "NUtils.h"
#include "CharArray.h"

class CPositionalSignValue : public CCharArray
{
public:
	CPositionalSignValue(vector<char>* acceptedValues, char length, char* val);
};