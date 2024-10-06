#include <iostream>
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

void ReadArrayElements(int Array[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> Array[i];
	}
}

void PrintArrayElements(int Array[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Array[i] << " ";
	}
}

int NumberOfRepeated(int Array[100], int Length, int NumberToCheck)
{
	int Counter = 0;
	for (int i = 0; i < Length; i++)
	{
		if (Array[i] == NumberToCheck)
			Counter++;
	}
	return Counter;
}

int main()
{
	int Array[100];
	int Length = ReadPositiveNumber("Enter the array Length: ");
	ReadArrayElements(Array, Length);
	int NumberToCheck = ReadPositiveNumber("\nEnter the number to check: ");

	cout << "\nOriginal array elements: ";
	PrintArrayElements(Array, Length);

	cout << endl << NumberToCheck << " is repeated " << NumberOfRepeated(Array, Length, NumberToCheck) << " time(s)\n";
	



}