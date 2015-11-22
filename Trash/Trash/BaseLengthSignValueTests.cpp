#include "stdafx.h"
#include "CppUnitTest.h"
#include "POJO\Complex\Helper\Utils.h"
#include "POJO\Complex\BaseAndLengthAndSignAndValue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HexaOperationsTests
{
	TEST_CLASS(CBaseAndLengthAndSignAndValueTests)
	{
	public:

		TEST_METHOD(emptyToCBaseAndLengthAndSignAndValueCTORTodefaults)
		{
			//arrange
			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue();
			int expectLength = 0;
			int expectSign = 1;
			int expectBase = 2;

			//act
			int reachedLength = temp->GetLength();
			int reachedSign = temp->GetSign();
			int reachedBase = temp->GetBase();

			//assert
			Assert::AreEqual(expectLength, reachedLength);
			Assert::AreEqual(expectSign, reachedSign);
			Assert::AreEqual(expectBase, reachedBase);

			//cleanUp
			temp = 0;
			delete temp;
		}

		TEST_METHOD(lengthToCBaseAndLengthAndSignAndValueCTORToGetLength)
		{
			//arrange
			char inLength = '2';
			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inLength);
			int expectLength = 2;

			//act
			int reachedLength = temp->GetLength();

			//assert
			Assert::AreEqual(expectLength, reachedLength);

			//cleanUp
			temp = 0;
			delete temp;
		}

		TEST_METHOD(baseAndlengthAndvalueToCBaseAndLengthAndSignAndValueCTORToGetValToTrimmedCharArray)
		{
			//arrange
			char inBase = '2';
			char inSize = '2';
			char *expectedChain1 = new char[2];
			char *inChain1 = new char[3];

			expectedChain1[0] = '1';
			expectedChain1[1] = '1';

			inChain1[0] = '1';
			inChain1[1] = '1';
			inChain1[2] = '2';

			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inBase, inSize, inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);

			//cleanUp
			delete inChain1;
			inChain1 = 0;

			delete temp;
			temp = 0;

			delete expectedChain1;
			expectedChain1 = 0;
		}

		TEST_METHOD(baseAndlengthAndvalueToCBaseAndLengthAndSignAndValueToGetValToFilleWith0CharArray)
		{
			//arrange
			char inBase = '2';
			char mySize = '8';
			char *expectedChain1 = new char[mySize];
			char *inChain1 = new char[2];

			expectedChain1[0] = '1';
			expectedChain1[1] = '1';
			expectedChain1[2] = '0';

			inChain1[0] = '1';
			inChain1[1] = '1';

			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inBase, mySize, inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);

			//cleanUp
			delete inChain1;
			inChain1 = 0;

			delete temp;
			temp = 0;

			delete expectedChain1;
			expectedChain1 = 0;
		}

		TEST_METHOD(baseAndlengthAndsignAndvalTo_CBaseAndLengthAndSignAndValueCTOR_ToGetSignTointPlus)
		{
			//arrange
			char inBase = '2';
			char inSize = '2';
			char aSign = '1';
			char *inChain1 = new char[3];
			int expectSign = 1;

			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inBase, inSize, aSign, inChain1);

			//act
			int reachedSign = temp->GetSign();

			//assert
			Assert::AreEqual(expectSign, reachedSign);

			//cleanUp
			delete inChain1;
			inChain1 = 0;

			delete temp;
			temp = 0;
		}

		TEST_METHOD(baseAndlengthAndsignAndvalTo_CBaseAndLengthAndSignAndValueCTOR_ToGetSignTointPlus2)
		{
			//arrange
			char inBase = '2';
			char inSize = '2';
			char aSign = '4';
			char *inChain1 = new char[3];
			int expectSign = 1;

			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inBase, inSize, aSign, inChain1);

			//act
			int reachedSign = temp->GetSign();

			//assert
			Assert::AreEqual(expectSign, reachedSign);

			//cleanUp
			delete inChain1;
			inChain1 = 0;

			delete temp;
			temp = 0;
		}

		TEST_METHOD(baseAndlengthAndsignAndvalTo_CBaseAndLengthAndSignAndValueCTOR_ToGetSignTointMinus)
		{
			//arrange
			char inBase = '2';
			char inSize = '2';
			char aSign = '-';
			char *inChain1 = new char[3];
			int expectSign = -1;

			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inBase, inSize, aSign, inChain1);

			//act
			int reachedSign = temp->GetSign();

			//assert
			Assert::AreEqual(expectSign, reachedSign);

			//cleanUp
			delete inChain1;
			inChain1 = 0;

			delete temp;
			temp = 0;
		}

		TEST_METHOD(baseAndlengthAndsignAndvalueTo_CBaseAndLengthAndSignAndValueCTOR_ToGetBaseToint)
		{
			//arrange
			char inBase = '2';
			char inSign = '2';
			char inSize = '3';
			char *inChain1 = new char[3];
			int expectSign = -1;
			int expectBase = 2;

			CBaseAndLengthAndSignAndValue *temp = new CBaseAndLengthAndSignAndValue(inBase, inSize, inSign, inChain1);

			//act
			int reachedBase = temp->GetBase();

			//assert
			Assert::AreEqual(expectBase, reachedBase);

			//cleanUp
			delete inChain1;
			inChain1 = 0;

			delete temp;
			temp = 0;
		}
	};
}