#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

int MyFloor(float Number)
{
	int intPart = int(Number);

	if (Number >= 0)
		return intPart;
	else
		return --intPart;
}

int main()
{

	float Number = ReadNumber("Enter a number: ");

	cout << "\nMy floor function : " << MyFloor(Number) << endl;
	cout << "C++ floor function:" << floor(Number) << endl;

}