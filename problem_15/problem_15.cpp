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

void PrintLetterPattern(int Number)
{
	for (int i = 65; i <= Number + 64; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	PrintLetterPattern(ReadPositiveNumber("Enter a number: "));

}