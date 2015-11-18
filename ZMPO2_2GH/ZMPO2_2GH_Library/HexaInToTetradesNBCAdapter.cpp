#include "stdafx.h"
#include "HexaInToTetradesNBCAdapter.h"


HexaInToTetradesNBCAdapter::HexaInToTetradesNBCAdapter(char length, char* val)
	: CHex(length,val)
{
	values = new CTetradeNBC[this->GetLength()];

	for (int i = length;i > -1;--i)
	{
		CTetradeNBC *_buffCreated = new CTetradeNBC(NUtils::hexaTobinArrUnit(val[i]));
		values[i] = *_buffCreated;
	}
}


HexaInToTetradesNBCAdapter::~HexaInToTetradesNBCAdapter()
{
	if (values)
	{
		for (int i = 0; i < this->GetLength();i++)
		{
			values[i] = NULL;
		}

		values = NULL;
	}
}
