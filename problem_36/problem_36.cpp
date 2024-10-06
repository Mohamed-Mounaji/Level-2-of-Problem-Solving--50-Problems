#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

void AddNumberToArray(int Number, int Arr[100], int& ArrLength)
{
	Arr[ArrLength] = Number;
	ArrLength++;
}

void FillArrSimiDynamic(int Arr[100], int &ArrLength)
{
	bool AddMore = true;
	do
	{
		AddNumberToArray(ReadNumber("Enter a Number: "), Arr, ArrLength);

		AddMore = ReadNumber("Do you want to add more YES=> 1 NO =>0: ");
	} while (AddMore);
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}


int main()
{
	int Arr[100], ArrLength=0;

	FillArrSimiDynamic(Arr, ArrLength);

	cout << "\nYour Array Length: " << ArrLength;
	cout << "\nArray Elements: ";
	PrintArray(Arr, ArrLength);

}