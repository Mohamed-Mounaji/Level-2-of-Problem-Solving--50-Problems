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

int ReverseNumber(int Number)
{
	short Remainder = 0;
	int Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

bool isPalindrome(int Number)
{
	return Number == ReverseNumber(Number);
}


int main()
{
	int Number = ReadPositiveNumber("Enter a positive number: ");

	if (isPalindrome(Number))
		cout << "Yes, this number is palindrome.";
	else
		cout << "No, this number is not palindrome.";
}