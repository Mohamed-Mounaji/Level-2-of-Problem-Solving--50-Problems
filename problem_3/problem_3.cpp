#include <iostream>
#include <cmath>
#include <string>
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

bool isPerfectNumber(int Number)
{
	int N = ceil(Number/2);
	int Sum = 0;

	for (int i = 1; i <= N; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}

	return (Sum == Number);
}

void PrintResult(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " is a perfect number.";
	else
		cout << Number << " is NOT a perfect number.";
}

int main()
{
	PrintResult(ReadPositiveNumber("Enter a number to check if it is perfect: "));
}