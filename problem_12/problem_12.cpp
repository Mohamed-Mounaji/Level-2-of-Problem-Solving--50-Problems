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

void PrintInvertedNumberPattern(int Number)
{
    for (int i = Number; i > 0; i--)
    {
        for (int k = i; k > 0; k--)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Enter a number: "));

    
}
