#include <iostream>
#include <cmath>
using namespace std;

float GetFranction(float Number)
{
	return Number - int(Number);
}
int MyRound(float Number)
{
	int intPart = (int)Number;
	float FractionPart = GetFranction(Number);

	if (abs(FractionPart) >= 0.5)
		if (Number < 0)
			return --intPart;
		else
			return ++intPart;
	else
		return intPart;


}
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber("Enter a number: ");

	cout << "\nMy round Function: " << MyRound(Number) << endl;
	cout << "C++ round function: " << round(Number);

	return 0;

}

