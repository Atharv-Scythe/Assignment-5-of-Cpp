#include <iostream>
using namespace std;
float SI(float p, float t, float r);
int main()
{
    /* Q22. Scan principle amount, number of years and rate of interest from user in main().
       Define function smpintr() to calculate simple interest. Print simple interest in main().
       Calculate simple interest in function and return it to main() */

    float principal, years, rate;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter number of years: ";
    cin >> years;

    cout << "Enter rate of interest: ";
    cin >> rate;

    float result = SI(principal, years, rate);

    cout << "Simple Interest = " << result << endl;

    return 0;
}
float SI(float p, float t, float r)
{
    float si = (p * t * r) / 100;
    return si;
}
