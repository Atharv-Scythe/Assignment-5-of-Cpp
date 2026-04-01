#include <iostream>
using namespace std;
void check(char ch);
int main()
{
	//9.Scan a character from user.Define function check() to check if it is uppercase alphabet,lowercase alphabet or a digit.
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    check(ch);

    return 0;
}
void check(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase Alphabet";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase Alphabet";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << "Digit";
    }
    else
    {
        cout << "Other Character";
    }
}
