#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"
#include "Hex.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(TestNUtil_HexaCharToSimpyBinaryChars)
	{
	public:

		TEST_METHOD(hexaChar0TobinaryConvertTodecimalcharArray0000)
		{
			//arrange
			char aInChar = '0';
			char* destinyTable = new char[4];
			char *expectedTable = "0000";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

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
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
	};
}