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

void AddNumToArray(int Number, int Arr[100], int& ArrLength)
{
	Arr[ArrLength] = Number;
	ArrLength++;
}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
	ArrLength = ReadNumber("Enter Your Array Length: ");
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = RandomNumber(1, 10)*10;
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

bool isNumberInArray(int Arr[100], int ArrLength, int Number)
{
	return NumberIndexInArray(Arr, ArrLength, Number) != -1;

}

void CopyDistinctNumbers(int SourceArr[100], int TargetArr[100], int SourceArrLength, int& TargetArrLength)
{
	for (int i = 0; i <= SourceArrLength; i++)
		if (!isNumberInArray(TargetArr, TargetArrLength, SourceArr[i]))
			AddNumToArray(SourceArr[i], TargetArr, TargetArrLength);

	TargetArrLength--;
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr1Length = 0;
	FillArrayWithRandomNumbers(Arr1, Arr1Length);

	int Arr2[100], Arr2Length = 0;

	CopyDistinctNumbers(Arr1, Arr2, Arr1Length, Arr2Length);

	cout << "\nArray 1 elements:\n";
	PrintArray(Arr1, Arr1Length);

	cout << "\n\nArray 2 Distinct elements:\n";
	PrintArray(Arr2, Arr2Length);

	return 0;
}