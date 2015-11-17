#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"
#include "PositionalSignValue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(TestCPositionalSignValue_PullingSign)
	{
	public:
		// all sizes inputted in chars are abs length of values ( without empty sign )
		// after i do need corrects

		TEST_METHOD(InsertingTooLongValueAndSign_TestOfProperAchievingDestiny)
		{
			//arrange
			char *expectedChain1 = new char[2];

			vector<char> acceptedValues;
			//acceptedValues.push_back('0');
			acceptedValues.push_back('1');
			acceptedValues.push_back('\0');

			char inSize = '3';
			char expectedSize = '2';
			int expectedSign = 1;
			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE + MINUS_SIGN_SIZE];

			expectedChain1[0] = '1';
			expectedChain1[1] = '0';
			expectedChain1[2] = '\0';

			inChain1[0] = '-';
			inChain1[1] = '1';
			inChain1[2] = '1';
			inChain1[3] = '2';
			inChain1[4] = '\0';

			CPositionalSignValue *temp = new CPositionalSignValue(&acceptedValues, expectedSize, inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];
			int reachedSign = temp->GetSign();

			//assert
			Assert::AreEqual(expectedSign, reachedSign);
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);

			//cleanUp
			if (temp)
				delete temp;

			if (expectedChain1) {
				for (int i = 0; i < NUtils::ToEqualsInt(expectedSize);i++)
					expectedChain1[i] = NULL;
				expectedChain1 = 0;
			}
		}
	};
}