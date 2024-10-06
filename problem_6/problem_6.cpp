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

int SumOfNumberDigits(int Number)
{
	int Remainder = 0;
	int Sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}

	return Sum;
}

int main()
{
	cout << SumOfNumberDigits(ReadPositiveNumber("Enter a number: "));

}