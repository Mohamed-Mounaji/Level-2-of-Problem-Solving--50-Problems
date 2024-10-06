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

void FillArrWithRandomKeys(string Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = GenerateKey();
}

void PrintArray(string Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << "Array[" << i << "] : " << Arr[i] << endl;
}



int main()
{
	srand((unsigned)time(NULL));
	string Arr[100];
	int ArrLength = ReadPositiveNumber("Enter your array length: ");

	FillArrWithRandomKeys(Arr, ArrLength);

	cout << "\nArray elements:\n\n";
	PrintArray(Arr, ArrLength);



	return 0;
}