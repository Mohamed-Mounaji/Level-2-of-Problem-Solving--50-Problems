#include <iostream>
#include <cstdlib>
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

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("Enter your array length: ");
    for (int i = 0; i < ArrLength; i++)
        Arr[i] = GetRandomNumber(1, 100);
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
}

int MinNumberInArray(int Arr[100], int ArrLength)
{
    int Min = Arr[0];
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] < Min)
            Min = Arr[i];
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "Array elements: ";
    PrintArrayElements(Arr, ArrLength);

    cout << "\nMin Number is: " << MinNumberInArray(Arr, ArrLength);

}