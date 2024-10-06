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

float GetFraction(float Num)
{
	return Num - int(Num);
}

int Myceil(float Number)
{
	if (abs(GetFraction(Number)) > 0)
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	else
		return Number;
}

int main()
{
	float Number = ReadNumber("Enter a number: ");

	cout << "\nMy ceil function : " << Myceil(Number) << endl;
	cout << "C++ ceil function:" << ceil(Number);

	return 0;
}