#include <iostream>
using namespace std;

string ReadPassword(string Message)
{
    string Pass;
    cout << Message;
    cin >> Pass;
    return Pass;
}

bool GessPassword(string Password)
{
    int Counter = 0;
    string Word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int x = 65; x <= 90; x++)
            {
                Counter++;
                Word = char(i);
                Word = Word + char(j);
                Word = Word + char(x);
                cout << "trial [" << Counter << "]: " << Word << endl;
                if (Word == Password)
                {
                    cout << "\nPassword is " << Password << endl;
                    cout << "Found after " << Counter << " trial(s).";
                    return true;
                }
            }

        }
    }
    return false;

}



int main()
{
    GessPassword(ReadPassword("Enter a three-letter password (all capital) : "));
    
}