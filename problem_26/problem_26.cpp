#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
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

int GetRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayRandomly(int Arr[100], int &ArrLength)
{
	ArrLength = ReadPositiveNumber("Enter the Array Length: ");
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = GetRandomNumber(1, 100);
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}

int SumOfArrElements(int Arr[100], int ArrLength)
{
	int Sum = 0;
	for (int i = 0; i < ArrLength; i++)
		Sum += Arr[i];
	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;
	FillArrayRandomly(Arr, ArrLength);

	cout << "Array Elements: ";
	PrintArrayElements(Arr, ArrLength);

	cout << "\nThe sum of all numbers: " << SumOfArrElements(Arr, ArrLength);

}