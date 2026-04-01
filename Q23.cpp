#include <iostream>
using namespace std;
void SI(float p, float t, float r, float &si);
int main()
{
    /* Q23. Repeat Q22. Return type of smpintr() must be void now. Print simple interest in main(). */

    float principal, years, rate, result;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter number of years: ";
    cin >> years;

    cout << "Enter rate of interest: ";
    cin >> rate;

    SI(principal, years, rate, result);

    cout << "Simple Interest = " << result << endl;

    return 0;
}
void SI(float p, float t, float r, float &si)
{
    si = (p * t * r) / 100;
}

