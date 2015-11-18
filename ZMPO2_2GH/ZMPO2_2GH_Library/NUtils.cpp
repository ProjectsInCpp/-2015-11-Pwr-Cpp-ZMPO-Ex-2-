#include "stdafx.h"
#include "NUtils.h"

int NUtils::ToEqualsInt(char aValue0)
{
	return int(aValue0) - 48;
}

char* NUtils::hexaTobinArrUnit(char aInChar)
{
	char* aOutDecimal = new char[4];

	switch (aInChar)
	{

	case '0':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case '1':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case '2':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case '3':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	case '4':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case '5':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case '6':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case '7':
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	case '8':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case '9':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case 'A':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case 'B':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	case 'C':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
		break;
	}
	case 'D':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '1';
		break;
	}
	case 'E':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '0';
		break;
	}
	case 'F':
	{
		aOutDecimal[0] = '1';
		aOutDecimal[1] = '1';
		aOutDecimal[2] = '1';
		aOutDecimal[3] = '1';
		break;
	}
	default:
	{
		aOutDecimal[0] = '0';
		aOutDecimal[1] = '0';
		aOutDecimal[2] = '0';
		aOutDecimal[3] = '0';
	};
	}

	return aOutDecimal;
}
