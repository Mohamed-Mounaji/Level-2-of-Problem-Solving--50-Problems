#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
	string  Text;
	cout << "Enter a text: ";
	getline(cin, Text);
	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;

}

string DecryptText(string Text,short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main()
{
	const short EncryptionKey = 2;
	string Text = ReadText();
	string EncryptedText = EncryptText(Text, EncryptionKey);
	string DecryptedText = DecryptText(EncryptedText, EncryptionKey);

	cout << "\nText before encryption: " << Text << endl;
	cout << "Text after encryption: " << EncryptedText << endl;
	cout << "Text after decryption: " << DecryptedText << endl;

}