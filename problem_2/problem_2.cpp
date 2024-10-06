#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime{Prime=1, NotPrime};

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message;
    cin >> Number;

    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int N = ceil(Number / 2);
    if (Number <= 1)
        return enPrimeNotPrime::NotPrime;

    for (int i = 2; i <= N; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumsFrom2toN(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (CheckPrime(i)== enPrimeNotPrime::Prime)
            cout << i << endl;
    }
}


int main()
{
    PrintPrimeNumsFrom2toN(ReadNumber("Enter a number: "));

    return 0;
}

