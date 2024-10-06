#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

void FillArray(int Arr[100], int& ArrLength)
{
	ArrLength = ReadNumber("Enter array Length: ");
	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = ReadNumber("Element [" + to_string(i + 1) + "]: ");
	}
}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";
}



bool isArrayPalindrome(int Arr[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] != Arr[ArrLength - 1 - i])
			return false;
	}

	return true;
}


int main()
{
	int Arr[100], ArrLength = 0;

	FillArray(Arr, ArrLength);

	cout << "\nArray elements:\n";
	PrintArray(Arr, ArrLength);

	if (isArrayPalindrome(Arr, ArrLength))
		cout << "\n\nYes, Array is Palindrome.\n";
	else
		cout << "\n\nNo, Array is not palindrome.\n";


}