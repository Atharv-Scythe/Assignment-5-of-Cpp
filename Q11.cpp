#include <iostream>
using namespace std;
int main()
{
    /* Q11. Write a program to explain all rules of references in CPP. */

    int a = 10;

    int &ref = a;
    cout << "a = " << a << ", ref = " << ref << endl;

    ref = 20;
    cout << "After modifying ref, a = " << a << endl;

    int b = 30;
    ref = b;
    cout << "After assigning b to ref, a = " << a << ", b = " << b << endl;

    int &ref2 = ref;
    ref2 = 50;
    cout << "After modifying ref2, a = " << a << endl;

    const int &cref = a;
    cout << "cref = " << cref << endl;

    int x = 5, y = 15;
    int &r = x;
    r = y;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
