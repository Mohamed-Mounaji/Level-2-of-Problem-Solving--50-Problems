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



int main()
{
	int Number = ReadPositiveNumber("Enter a number: ");
	int N = ReadPositiveNumber("Enter the number you want to look for: ");

	cout << "Digit " << N << " frequent in this number " << FrequencyofNinNumber(Number, N) << " time(s)";

}