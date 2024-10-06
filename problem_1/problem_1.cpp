#include <iostream>
using namespace std;


void PrintTableHeader()
{
	cout << "\n\t\t\t\tThe Multyplication Table\n";
	cout << "\n      _____________________________________________________________________________\n";
	cout << "      |  ";
	for (int i = 1; i <= 10; i++)
	{
		cout <<  i <<"\t";
	}
	cout << "\n______|____________________________________________________________________________";
}

string RowSeparator(int i)
{
	if (i < 10)
		return "    |  ";
	else
		return "   |  ";

}

void PrintMultiplicationTable()
{
	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << "\n " << i << RowSeparator(i);
		for (int k = 1; k <= 10; k++)
		{
			cout << i * k << "\t";
		}
	}
}



int main()
{
	PrintMultiplicationTable();

	return 0;
}