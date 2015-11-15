#include "stdafx.h"
#include "CppUnitTest.h"
#include "BoolValue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BinaryOperationsTests
{		
	TEST_CLASS(TestBoolValue)
	{
	public:
		
		TEST_METHOD(BinaryNegateOperator)
		{
			//arrange
			CBoolValue up(0);
			CBoolValue expected(1);

			//act
			CBoolValue reached(!up);

			//assert
			Assert::IsTrue(expected == reached);
			//cleanUp
		}
	};
}