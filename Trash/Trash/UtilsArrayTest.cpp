#include "stdafx.h"
#include "CppUnitTest.h"
#include "POJO\Complex\Helper\Utils.h"
#include "POJO\Complex\Helper\UtilsArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace CUtils;
using namespace CUtilsArray;

namespace HexaOperationsTests
{
	TEST_CLASS(UtilsArrayTests)
	{
	public:
		TEST_METHOD(charArrayToToUpperTocharArray)
		{
			//arrange
			int aSize = 5;
			char *alowerTable = "fda23";
			char *destinyTable = new char[aSize];
			char *expectedTable = "FDA23";

			//act
			upperTable(aSize, alowerTable, aSize, destinyTable);

			//assert
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(charArrayToengineLeftPureTocharArray)
		{
			//arrange
			int aSize = 5;
			char *alowerTable = "fda23";
			char *destinyTable = new char[aSize];
			char *expectedTable = "fda23";

			//act
			engineFromLeftPure(idx, aSize, alowerTable, destinyTable);

			//assert
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(charArrayToengineRightPureTocharArray)
		{
			//arrange
			int aSize = 5;
			char *alowerTable = "fda23";
			char *destinyTable = new char[aSize];
			char *expectedTable = "fda23";

			//act
			engineFromRightPure(idx, aSize, alowerTable, destinyTable);

			//assert
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(charArrayToengineRightTocharArray)
		{
			//arrange
			int aSize = 5;
			char *alowerTable = "fda23";
			char *destinyTable;
			char *expectedTable = "00000";

			//act
			destinyTable = engineFromRight(zeroTableUnit, aSize, alowerTable);

			//assert
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(charArrayToengineLeftTocharArray)
		{
			//arrange
			int aSize = 5;
			char *alowerTable = "fda23";
			char *destinyTable;
			char *expectedTable = "00000";

			//act
			destinyTable = engineFromLeft(zeroTableUnit, aSize, alowerTable);

			//assert
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar0TodecimalConvertTodecimalcharArray00)
		{
			//arrange
			char aInChar = '0';
			char* destinyTable = new char[2];
			char *expectedTable = "00";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
		TEST_METHOD(hexaChar1TodecimalConvertTodecimalcharArray01)
		{
			//arrange
			char aInChar = '1';
			char* destinyTable = new char[2];
			char *expectedTable = "01";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar2TodecimalConvertTodecimalcharArray02)
		{
			//arrange
			char aInChar = '2';
			char *destinyTable = new char[2];
			char *expectedTable = "02";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar3TodecimalConvertTodecimalcharArray03)
		{
			//arrange
			char aInChar = '3';
			char *destinyTable = new char[2];
			char *expectedTable = "03";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar4TodecimalConvertTodecimalcharArray04)
		{
			//arrange
			char aInChar = '4';
			char *destinyTable = new char[2];
			char *expectedTable = "04";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar5TodecimalConvertTodecimalcharArray05)
		{
			//arrange
			char aInChar = '5';
			char *destinyTable = new char[2];
			char *expectedTable = "05";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar6TodecimalConvertTodecimalcharArray06)
		{
			//arrange
			char aInChar = '6';
			char *destinyTable = new char[2];
			char *expectedTable = "06";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar7TodecimalConvertTodecimalcharArray07)
		{
			//arrange
			char aInChar = '7';
			char *destinyTable = new char[2];
			char *expectedTable = "07";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}


		TEST_METHOD(hexaChar8TodecimalConvertTodecimalcharArray08)
		{
			//arrange
			char aInChar = '8';
			char *destinyTable = new char[2];
			char *expectedTable = "08";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar9TodecimalConvertTodecimalcharArray09)
		{
			//arrange
			char aInChar = '9';
			char *destinyTable = new char[2];
			char *expectedTable = "09";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharATodecimalConvertTodecimalcharArray10)
		{
			//arrange
			char aInChar = 'A';
			char *destinyTable = new char[2];
			char *expectedTable = "10";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharBTodecimalConvertTodecimalcharArray11)
		{
			//arrange
			char aInChar = 'B';
			char *destinyTable = new char[2];
			char *expectedTable = "11";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharCTodecimalConvertTodecimalcharArray12)
		{
			//arrange
			char aInChar = 'C';
			char *destinyTable = new char[2];
			char *expectedTable = "12";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharDTodecimalConvertTodecimalcharArray13)
		{
			//arrange
			char aInChar = 'D';
			char *destinyTable = new char[2];
			char *expectedTable = "13";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharETodecimalConvertTodecimalcharArray14)
		{
			//arrange
			char aInChar = 'E';
			char *destinyTable = new char[2];
			char *expectedTable = "14";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
		TEST_METHOD(hexaCharFTodecimalConvertTodecimalcharArray15)
		{
			//arrange
			char aInChar = 'F';
			char *destinyTable = new char[2];
			char *expectedTable = "15";

			//act
			destinyTable = hexaTodecimalUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar0TobinaryConvertTodecimalcharArray0000)
		{
			//arrange
			char aInChar = '0';
			char* destinyTable = new char[4];
			char *expectedTable = "0000";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar1TobinaryConvertTodecimalcharArray0001)
		{
			//arrange
			char aInChar = '1';
			char* destinyTable = new char[4];
			char *expectedTable = "0001";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar2TobinaryConvertTodecimalcharArray0010)
		{
			//arrange
			char aInChar = '2';
			char* destinyTable = new char[4];
			char *expectedTable = "0010";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar3TobinaryConvertTodecimalcharArray0011)
		{
			//arrange
			char aInChar = '3';
			char* destinyTable = new char[4];
			char *expectedTable = "0011";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar4TobinaryConvertTodecimalcharArray0100)
		{
			//arrange
			char aInChar = '4';
			char* destinyTable = new char[4];
			char *expectedTable = "0100";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar5TobinaryConvertTodecimalcharArray0101)
		{
			//arrange
			char aInChar = '5';
			char* destinyTable = new char[4];
			char *expectedTable = "0101";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar6TobinaryConvertTodecimalcharArray0110)
		{
			//arrange
			char aInChar = '6';
			char* destinyTable = new char[4];
			char *expectedTable = "0110";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar7TobinaryConvertTodecimalcharArray0111)
		{
			//arrange
			char aInChar = '7';
			char* destinyTable = new char[4];
			char *expectedTable = "0111";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
		TEST_METHOD(hexaChar8TobinaryConvertTodecimalcharArray1000)
		{
			//arrange
			char aInChar = '8';
			char* destinyTable = new char[4];
			char *expectedTable = "1000";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar9TobinaryConvertTodecimalcharArray1001)
		{
			//arrange
			char aInChar = '9';
			char* destinyTable = new char[4];
			char *expectedTable = "1001";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharATobinaryConvertTodecimalcharArray1010)
		{
			//arrange
			char aInChar = 'A';
			char* destinyTable = new char[4];
			char *expectedTable = "1010";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharBTobinaryConvertTodecimalcharArray1011)
		{
			//arrange
			char aInChar = 'B';
			char* destinyTable = new char[4];
			char *expectedTable = "1011";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharCTobinaryConvertTodecimalcharArray1100)
		{
			//arrange
			char aInChar = 'C';
			char* destinyTable = new char[4];
			char *expectedTable = "1100";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharDTobinaryConvertTodecimalcharArray1101)
		{
			//arrange
			char aInChar = 'D';
			char* destinyTable = new char[4];
			char *expectedTable = "1101";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharETobinaryConvertTodecimalcharArray1110)
		{
			//arrange
			char aInChar = 'E';
			char* destinyTable = new char[4];
			char *expectedTable = "1110";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharFTobinaryConvertTodecimalcharArray1111)
		{
			//arrange
			char aInChar = 'F';
			char* destinyTable = new char[4];
			char *expectedTable = "1111";

			//act
			destinyTable = hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(int1TofirstLevelOperationDecoderTocharArrayADD)
		{
			//arrange
			int aInVal = 1;
			char* destinyTable = new char[4];
			char *expectedTable = "ADDTo";

			//act
			destinyTable = intTomainOperation(aInVal);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(int2TofirstLevelOperationDecoderTocharArraySUB)
		{
			//arrange
			int aInVal = 2;
			char* destinyTable = new char[4];
			char *expectedTable = "SUBTo";

			//act
			destinyTable = intTomainOperation(aInVal);

			//assert

			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(int3TofirstLevelOperationDecoderTocharArrayMUL)
		{
			//arrange
			int aInVal = 3;
			char* destinyTable = new char[4];
			char *expectedTable = "MULTo";

			//act
			destinyTable = intTomainOperation(aInVal);

			//assert

			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(int3TofirstLevelOperationDecoderTocharArrayNIL)
		{
			//arrange
			int aInVal = 4;
			char* destinyTable = new char[4];
			char *expectedTable = "NIL";

			//act
			destinyTable = intTomainOperation(aInVal);

			//assert

			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SignCodeMinusAndminus)
		{
			//arrange
			char aInSign1 = '-';
			char aInSign2 = '-';
			int expected = 1;

			//act
			int reached = singAndsignTocode(aInSign1, aInSign2);

			//assert
			Assert::AreEqual(expected, reached);
		}

		TEST_METHOD(SignCodeMinusAndPlus)
		{
			//arrange
			char aInSign1 = '-';
			char aInSign2 = '+';
			int expected = 2;

			//act
			int reached = singAndsignTocode(aInSign1, aInSign2);

			//assert
			Assert::AreEqual(expected, reached);
		}

		TEST_METHOD(SignCodePlusAndminus)
		{
			//arrange
			char aInSign1 = '+';
			char aInSign2 = '-';
			int expected = 3;

			//act
			int reached = singAndsignTocode(aInSign1, aInSign2);

			//assert
			Assert::AreEqual(expected, reached);
		}

		TEST_METHOD(SignCodePlusAndPlus)
		{
			//arrange
			char aInSign1 = '+';
			char aInSign2 = '+';
			int expected = 4;

			//act
			int reached = singAndsignTocode(aInSign1, aInSign2);

			//assert
			Assert::AreEqual(expected, reached);
		}

		TEST_METHOD(ADDUserStory1)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 1;
			char aInSign1 = '-';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToSUBF-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory2)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 1;
			char aInSign1 = '+';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToADDF+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory3)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 1;
			char aInSign1 = '+';
			char aInSign2 = '-';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToSUBF+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory11)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 1;
			char aInSign1 = '-';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToSUBT+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory5)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 1;
			char aInSign1 = '+';
			char aInSign2 = '-';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToADDT-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory6)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 1;
			char aInSign1 = '+';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToADDT+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory7)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 1;
			char aInSign1 = '-';
			char aInSign2 = '-';
			char* destinyTable = new char[9];
			char *expectedTable = "ADDToADDF-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(ADDUserStory8)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 1;
			char aInSign1 = '-';
			char aInSign2 = '-';

			char* destinyTable = new char[9];
			char *expectedTable = "ADDToADDT-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(MULUserStory8MulOtherSIgns1)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 3;
			char aInSign1 = '-';
			char aInSign2 = '+';

			char* destinyTable = new char[9];
			char *expectedTable = "MULToADDL-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(MULUserStory8MulOtherSIgns2)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 3;
			char aInSign1 = '+';
			char aInSign2 = '-';

			char* destinyTable = new char[9];
			char *expectedTable = "MULToADDL-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(MULUserStory9MulTheSameSIgns1)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 3;
			char aInSign1 = '+';
			char aInSign2 = '+';

			char* destinyTable = new char[9];
			char *expectedTable = "MULToADDL+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(MULUserStory10MulTheSameSIgns2)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 3;
			char aInSign1 = '-';
			char aInSign2 = '-';

			char* destinyTable = new char[9];
			char *expectedTable = "MULToADDL+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
		/////////////////////////////////////////////////////////////////////////////////////

		TEST_METHOD(SUBUserStory1Rule1)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 2;
			char aInSign1 = '-';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToADDF-";

			//act
			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory2Rule2)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 2;
			char aInSign1 = '+';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToSUBF+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory3Rule3)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 2;
			char aInSign1 = '+';
			char aInSign2 = '-';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToADDF+";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory11Rule4)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 2;
			char aInSign1 = '-';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToADDT-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory5Rule5)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 2;
			char aInSign1 = '+';
			char aInSign2 = '-';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToADDT+";

			//act
			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory6Rule6)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 2;
			char aInSign1 = '+';
			char aInSign2 = '+';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToSUBT-";

			//act
			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory7Rule7)
		{
			//arrange
			char aInSwap = 'F';
			int aInOperation = 2;
			char aInSign1 = '-';
			char aInSign2 = '-';
			char* destinyTable = new char[9];
			char *expectedTable = "SUBToSUBF-";
			//act

			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(SUBUserStory8Rule8)
		{
			//arrange
			char aInSwap = 'T';
			int aInOperation = 2;
			char aInSign1 = '-';
			char aInSign2 = '-';

			char* destinyTable = new char[9];
			char *expectedTable = "SUBToSUBT+";

			//act
			destinyTable = intTomainOperationDeeper(aInOperation, aInSign1, aInSign2, aInSwap);

			//assert
			Assert::AreEqual(expectedTable[8], destinyTable[8]);
			Assert::AreEqual(expectedTable[7], destinyTable[7]);
			Assert::AreEqual(expectedTable[6], destinyTable[6]);
			Assert::AreEqual(expectedTable[5], destinyTable[5]);
			Assert::AreEqual(expectedTable[4], destinyTable[4]);
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
	};
}