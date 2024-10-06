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
	int N = ceil(Number / 2);
	int Sum = 0;

	for (int i = 1; i <= N; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}

	return (Sum == Number);
}

void PrintPerfectNumsFrom0toN(int N)
{
	for (int i = 1; i <= N; i++)
	{
		if (isPerfectNumber(i))
			cout << i << endl;
	}
}


int main()
{
	PrintPerfectNumsFrom0toN(ReadPositiveNumber("Enter a number: "));
}

