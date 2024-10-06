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
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = GetRandomNumber(1, 100);
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}

void SumTwoArraysInOne(int Arr1[100], int Arr2[100], int Arr3[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		Arr3[i] = Arr1[i] + Arr2[i];
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr2[100], ArrLength;
	ArrLength = ReadPositiveNumber("Enter the Array Length: ");
	FillArrayRandomly(Arr1, ArrLength);
	FillArrayRandomly(Arr2, ArrLength);

	int Arr3[100];
	SumTwoArraysInOne(Arr1, Arr2, Arr3, ArrLength);

	cout << "\nArray 1 Numbers: ";
	PrintArrayElements(Arr1, ArrLength);
	cout << "\nArray 2 Numbers: ";
	PrintArrayElements(Arr2, ArrLength);

	cout << "\n\nSum Of Array 1 And 2: ";
	PrintArrayElements(Arr3, ArrLength);


}