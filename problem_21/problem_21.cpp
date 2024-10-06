#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

enum enCharType { CapitalLetter = 1, SmallLetter, SpecialChar, Digits };

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
	case enCharType::SpecialChar:
		return char(RandomNumber(33, 47));
	case enCharType::Digits:
		return char(RandomNumber(48, 57));
	}
}

string GetRandomWord(enCharType CharType, int Length)
{
	string Word = "";
	for (int i = 1; i <= Length; i++)
	{
		Word += GetRandomCharacter(CharType);
	}

	return Word;
}

string GenerateKey()
{
	string Key = "";
	Key += GetRandomWord(enCharType::CapitalLetter, 4) + "-";
	Key += GetRandomWord(enCharType::CapitalLetter, 4) + "-";
	Key += GetRandomWord(enCharType::CapitalLetter, 4) + "-";
	Key += GetRandomWord(enCharType::CapitalLetter, 4);

	return Key;

}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "]" << " : " << GenerateKey() << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));
	
	GenerateKeys(ReadPositiveNumber("Enter how many keys to generate: "));

	return 0;
}