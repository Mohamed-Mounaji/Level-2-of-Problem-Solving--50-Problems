#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrimeOrNot{Prime=1, NotPrime};

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

enPrimeOrNot CheckPrime(int Number)
{
	int M = ceil(Number / 2);

	if (Number <= 1)
		return enPrimeOrNot::NotPrime;

	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeOrNot::NotPrime;
	}

	return enPrimeOrNot::Prime;

}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
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

void CopyPrimeNumbers(int SourceArr[100], int TargetArr[100], int SourceArrLength, int& TargetArrLength)
{
	for (int i = 0; i < SourceArrLength; i++)
	{
		if (CheckPrime(SourceArr[i]) == enPrimeOrNot::Prime)
			AddNumToArray(SourceArr[i], TargetArr, TargetArrLength);
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr1Length = 0;
	FillArrayWithRandomNumbers(Arr1, Arr1Length);

	int Arr2[100], Arr2Length = 0;

	CopyPrimeNumbers(Arr1, Arr2, Arr1Length, Arr2Length);

	cout << "\nArray 1 elements:\n";
	PrintArray(Arr1, Arr1Length);

	cout << "\n\nArray 2 elements:\n";
	PrintArray(Arr2, Arr2Length);

	return 0;
}