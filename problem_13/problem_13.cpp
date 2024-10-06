#include <iostream>
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

void PrintNumberPatter(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int k = i; k >= 1; k--)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPatter(ReadPositiveNumber("Enter a positive number: "));

}
