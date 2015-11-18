#include "stdafx.h"
#include "HexaInToTetradesNBCAdapter.h"


int CHexaInToTetradesNBCAdapter::filterSign(char *aInTable)
{
	int outSign = 0;
	int stringLength = strlen(aInTable);

	std::vector<char> vTab(aInTable, aInTable + strlen(aInTable) + 1);

	int idxOfMinus = find(vTab.begin(), vTab.end(), MINUS_SIGN) - vTab.begin();

	if (idxOfMinus != stringLength && idxOfMinus == 0)
	{
		outSign = 1;
	}

	aInTable[idxOfMinus] = '0';

	return outSign;
}


CHexaInToTetradesNBCAdapter::CHexaInToTetradesNBCAdapter(char length, char* val)
	: CHex(length,val)
{
	this->sign = filterSign(val);

	values = new CTetradeNBC[length];

	int buffLength = strlen(val);

	std::vector<char> vTab(val, val + buffLength + 1);

	int idxOfEmpty = find(vTab.begin(), vTab.end(), END_LINE_SIGN) - vTab.begin();

	if (idxOfEmpty == vTab.size()) vTab.push_back('\0');

	std::vector<char> vOutTab(vTab);

	//if (sign == 1) vOutTab.pop_back();

	if (vOutTab.back() == '\0')
		vOutTab.pop_back();

	char *outTable = new char[NUtils::ToEqualsInt(length)];
	memset(outTable, NEUTRAL_ADD_SIGN, NUtils::ToEqualsInt(length));

	for (int j = vOutTab.size() - 1, i = NUtils::ToEqualsInt(length) - 1;i > -1 && j > -1;j--, i--)
	{
		outTable[i] = vOutTab[j];
	}

	outTable[NUtils::ToEqualsInt(length)] = END_LINE_SIGN;

	for (int j = vOutTab.size() - 1, i = NUtils::ToEqualsInt(length)- 1;i > -1 && j > -1;j--, i--)
	{
		char *temp = NUtils::hexaTobinArrUnit(outTable[i]);
		CTetradeNBC *_buffCreated = new CTetradeNBC(temp);
		values[i] = *_buffCreated;
	}
}

char CHexaInToTetradesNBCAdapter::GetBinaryTradeArray(int aPosition,int aWage)
{
	return this->values[aPosition].GetVal()[aWage];
}

CTetradeNBC* CHexaInToTetradesNBCAdapter::GetBinaryTrade(int aPosition)
{
	return &this->values[aPosition];
}

CHexaInToTetradesNBCAdapter::~CHexaInToTetradesNBCAdapter()
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
