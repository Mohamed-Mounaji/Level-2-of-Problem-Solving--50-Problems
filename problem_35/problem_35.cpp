#include <iostream>
#include <cstdlib>
using namespace std;

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

void FillArrayWithRandomNumbers(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}

short NumberIndexInArray(int Arr[100], int ArrLength, int Number)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] == Number)
			return i;
	}
	return -1;
}

bool isNumExistInArray(int Arr[100], int ArrLength, int Number)
{
	return NumberIndexInArray(Arr, ArrLength, Number) != -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100];
	int ArrLength = ReadPositiveNumber("Enter Array Length: ");

	FillArrayWithRandomNumbers(Arr, ArrLength);
	cout << "\nArray 1 elements: \n";
	PrintArray(Arr, ArrLength);

	short NumbertoSearch = ReadPositiveNumber("\n\nEnter a Number to search for: ");

	cout << "\nThe Number you are looking for: " << NumbertoSearch;
	
	if (isNumExistInArray(Arr, ArrLength, NumbertoSearch))
		cout << "\nYes, the number is found :-)\n";
	else
		cout << "\nNo, the number is not found :-(\n";

}