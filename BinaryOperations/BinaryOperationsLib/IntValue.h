#pragma once

class CIntValue
{
private:
	int _val;

public:

	int GetVal();
	void SetVal(int aVal);

	CIntValue();
	CIntValue(int aVal);
};

