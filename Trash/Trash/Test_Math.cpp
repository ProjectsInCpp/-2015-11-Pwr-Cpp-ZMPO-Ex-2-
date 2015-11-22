#include "stdafx.h"
#include "CppUnitTest.h"
#include "POJO\Complex\Helper\MathBT.h"
#include "POJO\Complex\CharArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace CMath;

namespace HexaOperationsTests
{
	TEST_CLASS(MathNamespaceOperationsTests)
	{

	public:

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithOverflowTocharArray1)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inValUp[] = { '1', '1', '1' };
			char inValDown[] = { '1', '1', '0' };
			char expectVal[] = { '1', '1', '0', '1' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithOverflowTocharArray2)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inValUp[] = { '1', '1', '1' };
			char inValDown[] = { '1', '1', '1' };
			char expectVal[] = { '1', '1', '1', '0' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithoutOverflowTocharArray1)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inValUp[] = { '1', '0', '1' };
			char inValDown[] = { '0', '1', '0' };
			char expectVal[] = { '0','1', '1', '1' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithoutOverflowTocharArray2)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inValUp[] = { '1', '0', '1' };
			char inValDown[] = { '0', '0', '0' };
			char expectVal[] = { '0', '1', '0', '1' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithoutOverflowTocharArray3)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inValUp[] = { '0', '1', '0' };
			char inValDown[] = { '1', '1', '1' };
			char expectVal[] = { '1', '0', '0', '1' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithoutOverflowTocharArray4)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inValUp[] = { '1', '0', '0' };
			char inValDown[] = { '1', '1', '1' };
			char expectVal[] = { '1', '0', '1', '1' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}

		TEST_METHOD(charArrayAndcharArrayToAddOperationWithoutOverflowTwoMinusTocharArray4)
		{
			//arrange
			char inLengthUp = '3';
			char inLengthDown = '3';
			char inBase = '2';

			char inSignUp = '1';
			char inSignDown = '1';

			char inValUp[] = { '1', '0', '0' };
			char inValDown[] = { '1', '1', '1' };
			char expectVal[] = { '1', '0', '1', '1' };

			//act
			char* reachedVal = Add(inBase, inLengthUp, inValUp, inLengthDown, inValDown);

			Assert::AreEqual(expectVal[3], reachedVal[3]);
			Assert::AreEqual(expectVal[2], reachedVal[2]);
			Assert::AreEqual(expectVal[1], reachedVal[1]);
			Assert::AreEqual(expectVal[0], reachedVal[0]);

		}
	};

	//  char *inChain0 = new char[2];
	//  char *inChain1 = new char[2];

	//  char *testReachedValue;
	//  char *testExpectedValue;

	//  void initTablesForAdd()
	//  {
	//    inChain0[0] = '0';
	//    inChain0[1] = '1';

	//    inChain1[0] = '1';
	//    inChain1[1] = '1';

	//    testExpectedValue = new char[2];
	//    testExpectedValue[0] = '1';
	//    testExpectedValue[1] = '2';
	//  }

	//  void initTablesForSubtract()
	//  {
	//    inChain0[0] = '1';
	//    inChain0[1] = '1';

	//    inChain1[0] = '0';
	//    inChain1[1] = '1';

	//    testExpectedValue = new char[2];
	//    testExpectedValue[0] = '1';
	//    testExpectedValue[1] = '0';
	//  }

	//  //void initTablesForMultiply()
	//  //{
	//  //  inChain0[0] = '1';
	//  //  inChain0[1] = '1';

	//  //  inChain1[0] = '1';
	//  //  inChain1[1] = '0';

	//  //  testExpectedValue = new char[2];
	//  //  testExpectedValue[0] = '1';
	//  //  testExpectedValue[1] = '0';
	//  //}   

	//  //void initTablesForMultiply()
	//  //{
	//  //  inChain0[0] = '0';
	//  //  inChain0[1] = '1';

	//  //  inChain1[0] = '1';
	//  //  inChain1[1] = '1';

	//  //  testExpectedValue = new char[];
	//  //  testExpectedValue[0] = '1';
	//  //  testExpectedValue[1] = '2';
	//  //}
	//  



	//  TEST_METHOD(CCharArray_Operations_Subtract)
	//  {
	//    initTablesForSubtract();
	//    CCharArray *temp = new CCharArray(inChain0);
	//    testReachedValue = temp->Substract(inChain1);

	//    int reached0 = temp->GetVal()[0];
	//    int reached1 = temp->GetVal()[1];

	//    int expected0 = testExpectedValue[0];
	//    int expected1 = testExpectedValue[1];

	//    Assert::AreEqual(expected0, reached0);
	//    Assert::AreEqual(expected1, reached1);

	//    temp = 0;
	//    delete temp;
	//  }

	//  //TEST_METHOD(CCharArray_Operations_Multiply)
	//  //{
	//  //  initTablesForMultiply();
	//  //  CCharArray *temp = new CCharArray(inChain0);
	//  //  testReachedValue = temp->Multiply(inChain1);

	//  //  int reached0 = temp->GetVal()[0];
	//  //  int reached1 = temp->GetVal()[1];

	//  //  int expected0 = testExpectedValue[0];
	//  //  int expected1 = testExpectedValue[1];

	//  //  Assert::AreEqual(expected0, reached0);
	//  //  Assert::AreEqual(expected1, reached1);

	//  //  temp = 0;
	//  //  delete temp;
	//  //}

	//};
}