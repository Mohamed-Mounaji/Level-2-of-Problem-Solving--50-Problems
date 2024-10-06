#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

enum enCharType{SmallLetter= 1, CapitalLetter, SpecialChar, Digit};

char GetRandomChar(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
	case enCharType::SpecialChar:
		return char(RandomNumber(33, 47));
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
	}
}


int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomChar(enCharType::CapitalLetter) << endl;
	cout << GetRandomChar(enCharType::SmallLetter) << endl;
	cout << GetRandomChar(enCharType::SpecialChar) << endl;
	cout << GetRandomChar(enCharType::Digit) << endl;


}

