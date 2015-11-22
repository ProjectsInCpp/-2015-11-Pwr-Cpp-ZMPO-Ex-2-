#include "LanguageAndBaseAndLengthAndSignAndValue.h"

class LiczbaHeks : public CLanguageAndBaseAndLengthAndSignAndValue
{
private:
	char* aInHexa;

public:
	LiczbaHeks(
		char aLength = '0',
		char* aInArray = new char[0],
		char aSign = '1',
		char aBase = '2'
		);
	~LiczbaHeks();

	void SetHexa(char* aInHexa);
	char* GetHexa();
};

