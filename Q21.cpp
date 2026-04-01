#include <iostream>
using namespace std;
void power(int n, int *sq, int *cb);
int main()
{
    /* Q21. Scan a number from user in main(). Define functions to find square and cube of a number.
       Define only one function power() and print both results in main().
       (Use parameter passing by address) */

    int num, square, cube;

    cout << "Enter a number: ";
    cin >> num;

    power(num, &square, &cube);

    cout << "Square = " << square << endl;
    cout << "Cube = " << cube << endl;

    return 0;
}
void power(int n, int *sq, int *cb)
{
    *sq = n * n;
    *cb = n *n * n;
}

