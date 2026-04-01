#include <iostream>
using namespace std;
int main()
{
    /* Q24. Scan 2 integers from user. Find their GCD. */

    int a, b, gcd;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    for(int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD = " << gcd << endl;
    return 0;
}
