#include "stdafx.h"
#include "CppUnitTest.h"
#include "POJO\Complex\Helper\Utils.h"
#include "POJO\Complex\LengthAndSignAndValue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HexaOperationsTests
{
	TEST_CLASS(CLengthAndSignAndValueTests)
	{
	public:

		TEST_METHOD(emptyToCLengthAndSignAndValueCTORTodefaults)
		{
			//arrange
			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue();
			int expectLength = 0;
			int expectSign = 1;

			//act
			int reachedLength = temp->GetLength();
			int reachedSign = temp->GetSign();

			//assert
			Assert::AreEqual(expectLength, reachedLength);
			Assert::AreEqual(expectSign, reachedSign);

			//cleanUp
			temp = 0;
			delete temp;
		}

		TEST_METHOD(lengthToCLengthAndSignAndValueCTORToGetLength)
		{
#pragma region **** ARRANGE ****
			char inLength = '2';
			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue(inLength);
			int expectLength = 2;
			int expectSign = 1;
#pragma endregion
#pragma region **** ACT ****
			int reachedLength = temp->GetLength();
			int reachedSign = temp->GetSign();
#pragma endregion
#pragma region **** ASSERT ****
			Assert::AreEqual(expectLength, reachedLength);
			Assert::AreEqual(expectSign, reachedSign);
#pragma endregion
#pragma region **** CLEANUP ****
			temp = 0;
			delete temp;
#pragma endregion
		}

		TEST_METHOD(lengthAndvalueToCLengthAndSignAndValueCTORToGetValToTrimmedCharArray)
		{
			//arrange
			char inSize = '2';
			char *expectedChain1 = new char[2];
			char *inChain1 = new char[3];


			expectedChain1[0] = '1';
			expectedChain1[1] = '1';

			inChain1[0] = '1';
			inChain1[1] = '1';
			inChain1[2] = '2';

			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue(inSize, inChain1);

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

		TEST_METHOD(lengthAndvalueToCLengthAndSignAndValueToGetValToFilleWith0CharArray)
		{

			//arrange
			char mySize = '8';
			char *expectedChain1 = new char[mySize];
			char *inChain1 = new char[2];

			expectedChain1[0] = '1';
			expectedChain1[1] = '1';
			expectedChain1[2] = '0';

			inChain1[0] = '1';
			inChain1[1] = '1';

			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue(mySize, inChain1);

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

		TEST_METHOD(lengthAndsignAndvalTo_CLengthAndSignAndValueCTOR_ToGetSignTointPlus)
		{
			//arrange
			char inSize = '2';
			char aSign = '1';
			char *inChain1 = new char[3];
			int expectSign = 1;

			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue(inSize, aSign, inChain1);

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

		TEST_METHOD(lengthAndsignAndvalTo_CLengthAndSignAndValueCTOR_ToGetSignTointPlus2)
		{
			//arrange
			char inSize = '2';
			char aSign = '4';
			char *inChain1 = new char[3];
			int expectSign = 1;

			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue(inSize, aSign, inChain1);

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

		TEST_METHOD(lengthAndsignAndvalTo_CLengthAndSignAndValueCTOR_ToGetSignTointMinus)
		{
			//arrange
			char inSize = '2';
			char aSign = '-';
			char *inChain1 = new char[3];
			int expectSign = -1;

			CLengthAndSignAndValue *temp = new CLengthAndSignAndValue(inSize, aSign, inChain1);

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
	};
}