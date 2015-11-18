#pragma once
#include "NUtils.h"
#include "TetradeNBC.h"
#include "Hex.h"

class HexaInToTetradesNBCAdapter : public CHex
{
private:
	CTetradeNBC *values = 0;

public:

	HexaInToTetradesNBCAdapter(char length, char* val);
	virtual ~HexaInToTetradesNBCAdapter();
};

