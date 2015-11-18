# include "stdafx.h"
# pragma region ****************** NBC ***********************************
# pragma region ****************** Not emplemented still not important CTORS 

//char* CNBC::GetVal()
//{
//	return CCharArray::GetVal();
//}

//CNBC::CNBC():CNBC()
//{
//	
//}
//
//CNBC::CNBC(const CNBC& aInput) :CNBC(aInput)
//{
//
//}

//CNBC(vector<char> acceptedValues, char length, char* val);
//CNBC();
//CNBC(const CNBC& aInput);
# pragma endregion


# pragma region ****************** Not emplemented still not important CTORS 

//char* CNBC::GetVal()
//{
//	return CCharArray::GetVal();
//}

//CNBC::CNBC():CNBC()
//{
//	
//}
//
//CNBC::CNBC(const CNBC& aInput) :CNBC(aInput)
//{
//
//}
# pragma endregion
# pragma endregion
# pragma region ****************** CCharArray ******************************************** 
# pragma region ****************** Not emplemented still not important CTORS or functions 


//void CCharArray::filterWrongChars(char *aInTable)
//{
//	vector<char> _acc;
//
//	for (int i = this->length - 1; i >-1; i--)
//	{
//		char tempVal = aInTable[i];
//
//		if (tempVal != PROPER_SIGN_0 && tempVal != PROPER_SIGN_1)
//		{
//			aInTable[i] = '0';
//		}
//		else
//		{
//			aInTable[i] = tempVal;
//		}
//	}
//}

//void SetVal(char* aVal);

// ************************** CTORS ? DTORS *****************
//CCharArray();
//CCharArray(char length, char* val);
//CCharArray(CCharArray &value);

//char properBinaryProduct(char aVal);
//void zeroTable(int length, char* inTable);u

# pragma endregion


# pragma region ****************** Not emplemented still not important CTORS or functions 

//CCharArray::CCharArray(char aLength, char *aVal)
//{
//	this->length = NUtils::ToEqualsInt(aLength) + END_SIGN_SIZE;
//	this->val = new char[this->length];
//	this->val = filterWrongCharsWithVector(this->length, aVal);
//	aVal = NULL;
//}

//CCharArray::CCharArray()
//{
//	this->length = 0;
//	injectDynamicTable(this->length,this->val);
//	zeroTable(length, this->val);
//}
//
//CCharArray::CCharArray (CCharArray &value)
//{
//	this->length = value.length;
//	injectDynamicTable(this->length, this->val);
//	zeroTable(length, this->val);
//	this->val = value.val;
//}


//
//void CCharArray::SetVal(char *aVal) /// TODO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//{
//	// package
//
//	char *buffArgument = new char[this->length];
//	buffArgument = aVal;
//
//	//
//
//	this->val = aVal;
//}

//CCharArray::CCharArray(vector<char> acceptedValues, char aLength, char *aVal)
//{
//	this->acceptedValues = acceptedValues;
//	this->length = NUtils::ToEqualsInt(aLength) + END_SIGN_SIZE;
//	this->val = new char[this->length];
//	//memset(this->val, NEUTRAL_ADD_SIGN, this->length - END_SIGN_SIZE);
//
//	//filterWrongChars(aVal);
//	this->val = filterWrongCharsWithVector(this->length, aVal);
//
//	//strncpy(this->val, aVal, this->length - END_SIGN_SIZE);
//
//	//filterWrongChars(this->val);
//	// ending word
//	//this->val[this->length - END_SIGN_SIZE] = END_LINE_SIGN;
//	aVal = NULL;
//}

# pragma endregion
# pragma endregion
# pragma region ****************** CHex Old ******************

# pragma region ****************** Not emplemented still not important CTORS 
//CHex(vector<char> acceptedValues, char length, char* val);
//CHex();
//CHex(const CHex& aInput);
# pragma endregion

# pragma endregion 
# pragma region ****************** NUtils ******************

//#define PROPER_SIGN_1 '1'
//#define PROPER_SIGN_2 '2'


//vector<char> accGoodChars(char *aInTable);


//vector<char> NUtils::accGoodChars(char *aInTable)
//{
//	vector<char> _acc;
//	int it = 0;
//
//	while (aInTable[it] == PROPER_SIGN_0 || aInTable[it] == PROPER_SIGN_1) {
//		_acc.push_back(aInTable[it]);
//		++it;
//	}
//
//	return _acc;
//}

# pragma endregion 