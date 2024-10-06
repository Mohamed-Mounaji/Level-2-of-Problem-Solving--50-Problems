#include <iostream>
#include <cmath>
using namespace std;

float Myabs(float Number)
{
	if (Number < 0)
		return -Number;
	else
		return Number;
}

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber("Enter a number: ");

	cout << "My abs Function: " << Myabs(Number) << endl;
	cout << "C++ abs Function: " << abs(Number);


	return 0;
}

