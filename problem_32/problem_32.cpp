#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    cout <<Message;
    cin >> Number;
    return Number;
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayRandomly(int Arr[100], int &ArrLength)
{
    ArrLength = ReadNumber("Enter Your Array Length: ");
    for (int i = 0; i < ArrLength; i++)
        Arr[i] = RandomNumber(1, 100);
    
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
}

void CopyArrayInReverseOrder(int Arr1[100], int Arr2[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        Arr2[i] = Arr1[ArrLength - 1 - i];
}

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength;
    FillArrayRandomly(Arr, ArrLength);

    int Arr2[100];
    CopyArrayInReverseOrder(Arr, Arr2, ArrLength);

    cout << "Array 1 elements:\n";
    PrintArray(Arr, ArrLength);

    cout << "\n\nArray 2 After copy arr1 to it in reverse:\n";
    PrintArray(Arr2, ArrLength);

    
}