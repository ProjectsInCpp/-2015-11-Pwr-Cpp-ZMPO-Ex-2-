#include "stdafx.h"
#include "CppUnitTest.h"
#include "POJO\Complex\Helper\Utils.h"
#include "POJO\Complex\LanguageAndBaseAndLengthAndSignAndValue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HexaOperationsTests
{
	TEST_CLASS(CLanguageAndBaseAndLengthAndSignAndValueTests)
	{
	public:

		TEST_METHOD(emptyToCLanguageAndBaseAndLengthAndSignAndValueCTORTodefaults)
		{
			//arrange
			CLanguageAndBaseAndLengthAndSignAndValue *temp = new CLanguageAndBaseAndLengthAndSignAndValue();
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

		TEST_METHOD(baseAndlengthAndvalueToCLanguageAndBaseAndLengthAndSignAndValueCTORTodefaults)
		{
			//CLanguageAndBaseAndLengthAndSignAndValue(char aBase, char aLength, char* aVal);
			//arrange 
			char inSign = '1';
			char inBase = '2';
			char inLength = '3';
			char* value = new char[3]{ '1', '0', '1' };

			CLanguageAndBaseAndLengthAndSignAndValue *temp1 =
				new CLanguageAndBaseAndLengthAndSignAndValue(inLength, value, inSign, inBase);

			int expectLength = 3;
			int expectSign = 1;
			int expectBase = 2;
			char expectValue2 = '1';
			char expectValue1 = '0';
			char expectValue0 = '1';

			//act
			int reachedLength = temp1->GetLength();
			int reachedSign = temp1->GetSign();
			int reachedBase = temp1->GetBase();
			char *reachedValue = temp1->GetVal();

			char reachedValue2 = reachedValue[2];
			char reachedValue1 = reachedValue[1];
			char reachedValue0 = reachedValue[0];

			//assert
			Assert::AreEqual(expectLength, reachedLength);
			Assert::AreEqual(expectSign, reachedSign);
			Assert::AreEqual(expectBase, reachedBase);
			Assert::AreEqual(expectValue2, reachedValue2);
			Assert::AreEqual(expectValue1, reachedValue1);
			Assert::AreEqual(expectValue0, reachedValue0);

			//cleanUp
			temp1 = 0;
			delete temp1;
		}

		TEST_METHOD(intAddTointerpretTostring)
		{
			int inCommand = 1;
			char* reachedValue = new char[8];

			reachedValue = CLanguageAndBaseAndLengthAndSignAndValue::chooseOperation(inCommand);

			//act
			char* expectValue = "00000Add";

			//assert
			Assert::AreEqual(expectValue[7], reachedValue[7]);
			Assert::AreEqual(expectValue[6], reachedValue[6]);
			Assert::AreEqual(expectValue[5], reachedValue[5]);
			Assert::AreEqual(expectValue[4], reachedValue[4]);
			Assert::AreEqual(expectValue[3], reachedValue[3]);
			Assert::AreEqual(expectValue[2], reachedValue[2]);
			Assert::AreEqual(expectValue[1], reachedValue[1]);
			Assert::AreEqual(expectValue[0], reachedValue[0]);

		}
		TEST_METHOD(intSubtractTointerpretTostring)
		{
			int inCommand = 2;
			char* reachedValue = new char[8];

			reachedValue = CLanguageAndBaseAndLengthAndSignAndValue::chooseOperation(inCommand);

			//act
			char* expectValue = "Subtract";

			//assert
			Assert::AreEqual(expectValue[7], reachedValue[7]);
			Assert::AreEqual(expectValue[6], reachedValue[6]);
			Assert::AreEqual(expectValue[5], reachedValue[5]);
			Assert::AreEqual(expectValue[4], reachedValue[4]);
			Assert::AreEqual(expectValue[3], reachedValue[3]);
			Assert::AreEqual(expectValue[2], reachedValue[2]);
			Assert::AreEqual(expectValue[1], reachedValue[1]);
			Assert::AreEqual(expectValue[0], reachedValue[0]);

		}

		TEST_METHOD(intMultiTointerpretTostring)
		{
			int inCommand = 3;
			char* reachedValue = new char[8];

			reachedValue = CLanguageAndBaseAndLengthAndSignAndValue::chooseOperation(inCommand);

			//act
			char* expectValue = "Multiply";

			//assert
			Assert::AreEqual(expectValue[7], reachedValue[7]);
			Assert::AreEqual(expectValue[6], reachedValue[6]);
			Assert::AreEqual(expectValue[5], reachedValue[5]);
			Assert::AreEqual(expectValue[4], reachedValue[4]);
			Assert::AreEqual(expectValue[3], reachedValue[3]);
			Assert::AreEqual(expectValue[2], reachedValue[2]);
			Assert::AreEqual(expectValue[1], reachedValue[1]);
			Assert::AreEqual(expectValue[0], reachedValue[0]);

		}
	};
}