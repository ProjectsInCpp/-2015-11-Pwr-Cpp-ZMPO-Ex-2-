// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tempp.h"
#include <iostream>
#include <conio.h>

using namespace std;

void char→bigChar1(char aIn, char aOut)
{
  aOut = char(toupper(aIn));
}

char char→bigChar2(char aIn)
{
  return char(toupper(aIn));
}

void takeFunctionInLoop1(int aInSize,
  char* aInTable,
  int aOutSize,
  char* aOutTable,
  void(*funcPtr)(char, char))
{
  for (int i = 0; i < aInSize; i++)
  {
    (*funcPtr)(aInTable[i], aOutTable[i]);
  }
}

void takeFunctionInLoop2(int aInSize,
  char* aInTable,
  char* aOutTable,
  char(*funcPtr)(char))
{
  for (int i = 0; i < aInSize; i++)
  {
    aOutTable[i] = (*funcPtr)(aInTable[i]);
  }
}

void takeFunctionInLoop3(int aInSize,
  char* aInTable,
  char* aOutTable,
  char(*funcPtr)(char))
{
  for (int i = 0; i < aInSize; i++)
  {
    aOutTable[i]=(*funcPtr)(aInTable[i]);
  }
}

char filterWrongChars(char aInChar)
{
  char conditionalChar = 'A';
  char retChar = 'A';

  if (aInChar != conditionalChar)
  {
    retChar = '0';
  }

  return retChar;
}

int _tmain(int argc, _TCHAR* argv[])
{
  void(*funcPtr)(char aCharIn, char aCharOut);

  CTempp* _temp1 = new CTempp();
  cout << "Default1: " << _temp1->_val1 << endl;
  cout << "Default2: " << _temp1->_val2 << endl;

  CTempp* _temp2 = new CTempp(3);
  cout << "Determined1: "<<_temp2->_val1 << endl;
  cout << "Determined2: " << _temp2->_val2 << endl;

  CTempp* _temp3 = new CTempp(3,4);
  cout << "DeterminedTwo1: " << _temp3->_val1 << endl;
  cout << "DeterminedTwo2: " << _temp3->_val2 << endl;

  char c;
  c = 'a';
  cout << "Uppered "<<c<<": "<<char(toupper(c)) << endl;

  c = 'A';
  cout << "Uppered " << c << ": " << char(toupper(c)) << endl;

  c = '\0';
  cout << "Uppered " << c << ": " << char(toupper(c)) << endl;

  //int aSize = 4;
  //char* inTable = "a4cd";
  //char* outTable = new char[aSize];

  //cout << "Before loop with func: "<<inTable << endl;
  //takeFunctionInLoop1(aSize, inTable, aSize, outTable, char→bigChar1);
  //cout << "After loop with func: " << outTable << endl;

  int aSize2 = 4;
  char* inTable2 = "aaaa";
  char* outTable2 = new char[aSize2];

  cout << "Before loop with func: " << inTable2 << endl;
  takeFunctionInLoop2(aSize2, inTable2,outTable2, char→bigChar2);
  cout << "After loop with func: " << outTable2 << endl;

  int aSize3 = 4;
  char* inTable3 = outTable2;
  char* outTable3 = new char[aSize3];

  cout << "Before loop with func filter: " << inTable2 << endl;
  takeFunctionInLoop3(aSize3, inTable3, outTable3, filterWrongChars);
  cout << "After loop with func filter: ";

  for (int i = 0; i < aSize3; i++)
  {
    cout << outTable3[i];
  }
  
  cout << endl;

  getchar();
}





