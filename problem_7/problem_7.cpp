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
	int  Remainder = 0;
	int NumberReversed = 0;
	while (Number > 0)
	{
		Remainder = Number % 10; 
		Number = Number / 10;
		NumberReversed = NumberReversed * 10 + Remainder;
	}

	return NumberReversed;
}

int main()
{
	cout << "Number reversed: " << ReverseNumber(ReadPositiveNumber("Enter a number: "));

}