#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

void AddNumToArray(int Number, int Arr[100], int &ArrLength)
{
	Arr[ArrLength] = Number;
	ArrLength++;
}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLength)
{
	ArrLength = ReadNumber("Enter Your Array Length: ");
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}

void CopyArr1ToArr2(int Arr1[100], int Arr2[100], int ArrLength, int &Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
		AddNumToArray(Arr1[i], Arr2, Arr2Length);
}


int main()
{
	srand((unsigned)time(NULL));
	int Arr1[100], ArrLength=0;
	FillArrayWithRandomNumbers(Arr1, ArrLength);

	int Arr2[100], Arr2Length=0;

	CopyArr1ToArr2(Arr1, Arr2, ArrLength, Arr2Length);

	cout << "\nArray 1 elements:\n";
	PrintArray(Arr1, ArrLength);

	cout << "\n\nArray 2 elements:\n";
	PrintArray(Arr2, Arr2Length);





}