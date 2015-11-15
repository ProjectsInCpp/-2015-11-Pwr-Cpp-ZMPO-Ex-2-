#pragma once

class CBoolValue
{
private:
	bool _val;

public:

	// ctors
	CBoolValue(bool aVal);
	CBoolValue(const CBoolValue &aVal);
	CBoolValue();

	// operators 
	CBoolValue& operator!();
	bool operator==(const CBoolValue &aVal);
};

