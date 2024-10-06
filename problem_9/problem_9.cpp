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

int FrequencyofNinNumber(int Number, int N)
{
	int Counter = 0;
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder == N)
			Counter++;
	}

	return Counter;
}

void PrintAllDigitsFrequency(int Number)
{
	short DigitFrequency = 0;

	for (int i = 0; i < 10; i++)
	{
		DigitFrequency = FrequencyofNinNumber(Number, i);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " frequency is " << DigitFrequency << " times.\n";
		}

	}
}


int main()
{	
	int Number = ReadPositiveNumber("Enter a number: ");

	PrintAllDigitsFrequency(Number);

}