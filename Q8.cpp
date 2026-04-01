#include <iostream>
using namespace std;
int main()
{
	///* Q8. Scan 2 integers from user. Find their LCM. */

    int a, b, max;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    max = (a > b) ? a : b;

    while('z')
    {
        if(max % a == 0 && max % b == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        max++;
    }

    return 0;
}
