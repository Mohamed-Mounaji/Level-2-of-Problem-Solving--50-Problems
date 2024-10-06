#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

float Mysqrt(int Number)
{
	return pow(Number, 0.5);
}

int main()
{
	int Number = ReadNumber("Enter a number: ");

	cout << "\nMy sqrt function : " << Mysqrt(Number) << endl;
	cout << "C++ sqrt function: " << sqrt(Number) << endl;

}