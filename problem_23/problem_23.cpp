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

void FillArrayRandomly(int Arr[100], int& Length)
{
	Length = ReadPositiveNumber("Enter the Array Length: ");

	for (int i = 0; i < Length; i++)
		Arr[i] = GetRandomNumberInRange(1, 100);
}

void PrintArrayData(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
		cout << Arr[i] << " ";
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], Length;

	FillArrayRandomly(Arr, Length);
	
	cout << "Array elements: ";
	PrintArrayData(Arr, Length);




}