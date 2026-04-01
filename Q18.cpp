#include <iostream>
using namespace std;
void circle(float *r);
int main()
{
    /* Q18. Repeat Q17. Use parameter passing by address. */

    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    circle(&radius);

    return 0;
}
void circle(float *r)
{
    float area = 3.14 * (*r) * (*r);
    float circumference = 2 * 3.14 * (*r);

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
}

