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

void SwapTwoNums(int &Num1, int &Num2)
{
	int Num3 = Num1;
	Num1 = Num2;
	Num2 = Num3;
}

void FillArrayFrom1toN(int Arr[100], int &ArrLength)
{
	ArrLength = ReadPositiveNumber("Enter Your Array Length: ");
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = i + 1;
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}

void ShuffleArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i <= ArrLength; i++)
	{
		SwapTwoNums(Arr[RandomNumber(0, ArrLength - 1)], Arr[ RandomNumber(0, ArrLength - 1)]);	
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int Arr[100], ArrLength;

	FillArrayFrom1toN(Arr, ArrLength);
	cout << "\nArray elements before suffle: \n";
	PrintArrayElements(Arr, ArrLength);

	ShuffleArrayElements(Arr, ArrLength);

	cout << "\nArray Elements after suffle: \n";
	PrintArrayElements(Arr, ArrLength);
}