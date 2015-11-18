#pragma once

#include "HexaInToTetradesNBCAdapter.h"

class CHeksa : public CHexaInToTetradesNBCAdapter
{
public:
	char* GetHexaArray();
	int GetSize();

	CHeksa(char length, char* val);

	virtual ~CHeksa();
};

