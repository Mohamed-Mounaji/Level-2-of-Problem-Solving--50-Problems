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

void FillArrayRandomly(int Arr[100], int& ArrLength)
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

void CopyArray(int Arr1[100], int Arr2[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		Arr2[i] = Arr1[i];
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr2[100];
	int ArrLength;

	FillArrayRandomly(Arr1, ArrLength);
	CopyArray(Arr1, Arr2, ArrLength);

	cout << "\nArray one Elements: ";
	PrintArrayElements(Arr1, ArrLength);

	cout << "\nArray two Elements: ";
	PrintArrayElements(Arr2, ArrLength);



}
