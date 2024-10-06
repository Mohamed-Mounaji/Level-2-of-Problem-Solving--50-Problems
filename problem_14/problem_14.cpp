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

void PrintInvertedLetterPattern(int Number)
{
	for (int i = 64 + Number; i >= 65; i--)
	{
		for (int k = i; k >= 65; k--)
		{
			cout << char(i);
		}
		cout << endl;
	}
}


int main()
{
	PrintInvertedLetterPattern(ReadPositiveNumber("Enter a number: "));
	
}