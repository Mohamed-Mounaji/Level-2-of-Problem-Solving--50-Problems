#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
    ArrLength = ReadNumber("Enter your array length: ");
    for (int i = 0; i < ArrLength; i++)
        Arr[i] = RandomNumber(-100, 100);
}

int CountNegativeNumsInArray(int Arr[100], int ArrLength)
{
    int Counter = 0;
    for (int i = 0; i < ArrLength; i++)
        if (Arr[i] < 0)
            Counter++;

    return Counter;
}


int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength = 0;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "\n\nArray elements:\n";
    PrintArray(Arr, ArrLength);

    cout << "\n\nNegative numbers count is:\n" << CountNegativeNumsInArray(Arr, ArrLength);



    return 0;
}