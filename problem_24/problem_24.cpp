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

int GetRandomNumberInRange(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayRandomly(int Arr[100], int& ArrLength)
{
	ArrLength = ReadPositiveNumber("Enter the Array Length: ");

	for (int i = 0; i < ArrLength; i++)
		Arr[i] = GetRandomNumberInRange(1, 100);
}

void PrintArrayData(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}

int GetMaxNumber(int Arr[100], int ArrLength)
{
	int Max = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] > Max)
			Max = Arr[i];
	}
	return Max;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;

	FillArrayRandomly(Arr, ArrLength);

	cout << "Array elements: ";
	PrintArrayData(Arr, ArrLength);

	cout << "\nMax number is: " << GetMaxNumber(Arr, ArrLength);
}



