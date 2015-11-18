#pragma once
#include "NUtils.h"
#include "TetradeNBC.h"
#include "Hex.h"
#include <Windows.h>

class CHexaInToTetradesNBCAdapter : public CHex
{
private:
	CTetradeNBC *values = 0;

public:
	CTetradeNBC* GetBinaryTrade(int aPosition);
	virtual char GetBinaryTradeArray(int aPosition, int aWage);
	CHexaInToTetradesNBCAdapter(char length, char* val);
	virtual ~CHexaInToTetradesNBCAdapter();
	int filterSign(char *aInTable);
};