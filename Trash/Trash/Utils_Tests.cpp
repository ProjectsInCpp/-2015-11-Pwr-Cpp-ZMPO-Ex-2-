#include "stdafx.h"
#include "CppUnitTest.h"
#include "POJO\Complex\Helper\Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace CUtils;

namespace HexaOperationsTests
{
	TEST_CLASS(UtilsTests)
	{
	public:
		TEST_METHOD(charToToEqualsSignToint1)
		{
			//arrange
			char aTemp0 = '-';
			int expectedSign = -1;

			//act
			int reachedSign = ToEqualsSign(aTemp0);

			Assert::AreEqual(reachedSign, expectedSign);
		}

		TEST_METHOD(charToToEqualsSignToint2)
		{
			//arrange
			char aTemp0 = '9';
			int expectedSign = 1;

			//act
			int reachedSign = ToEqualsSign(aTemp0);

			Assert::AreEqual(reachedSign, expectedSign);
		}

		TEST_METHOD(charToToEqualsIntInHexaToint)
		{
			//arrange
			char aIn0 = 'A';
			char aIn1 = 'B';
			char aIn2 = 'C';
			char aIn3 = 'D';
			char aIn4 = 'E';
			char aIn5 = 'F';

			int aTemp0 = 10;
			int aTemp1 = 11;
			int aTemp2 = 12;
			int aTemp3 = 13;
			int aTemp4 = 14;
			int aTemp5 = 15;

			//act
			int reachedSign0 = ToEqualsNumberIntFromHexa(aIn0);
			int reachedSign1 = ToEqualsNumberIntFromHexa(aIn1);
			int reachedSign2 = ToEqualsNumberIntFromHexa(aIn2);
			int reachedSign3 = ToEqualsNumberIntFromHexa(aIn3);
			int reachedSign4 = ToEqualsNumberIntFromHexa(aIn4);
			int reachedSign5 = ToEqualsNumberIntFromHexa(aIn5);

			Assert::AreEqual(aTemp0, reachedSign0);
			Assert::AreEqual(aTemp1, reachedSign1);
			Assert::AreEqual(aTemp2, reachedSign2);
			Assert::AreEqual(aTemp3, reachedSign3);
			Assert::AreEqual(aTemp4, reachedSign4);
			Assert::AreEqual(aTemp5, reachedSign5);
		}


	};
}