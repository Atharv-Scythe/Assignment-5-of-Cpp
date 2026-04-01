#include <iostream>
using namespace std;
void change(char &ch);
int main()
{
    /* Q10. Scan a character from user. Define function change() to change this character to uppercase 
	if it is in lowercase. Function return type should be void. */

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    change(ch);

    cout << "Result: " << ch;

    return 0;
}

void change(char &ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
}
