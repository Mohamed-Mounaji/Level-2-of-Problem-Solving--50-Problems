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

bool isPrime(int Number)
{
	int N = ceil(Number / 2);
	if (Number == 1)
		return false;
	if (Number == 2)
		return true;

	for (int i = 2; i <= Number / 2; i++)
	{
		if (Number % i == 0)
			return false;
	}
	return true;
}

void CopyPrimeNumbers(int Arr1[100], int Arr2[100], int Arr1Length,int& Arr2Length)
{
	int j = 0;
	for (int i = 0; i < Arr1Length; i++)
	{
		if (isPrime(Arr1[i]))
		{
			Arr2[j] = Arr1[i];
			j++;
		}
	}
	Arr2Length = --j;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr2[100], Arr1Length, Arr2Length;
	
	FillArrayRandomly(Arr1, Arr1Length);
	CopyPrimeNumbers(Arr1, Arr2, Arr1Length, Arr2Length);

	cout << "\nArray one elements: ";
	PrintArrayElements(Arr1, Arr1Length);

	cout << "\nArray two elements: ";
	PrintArrayElements(Arr2, Arr2Length);
}