#include <iostream>
using namespace std;
void circle(float &r);
int main()
{
    /* Q17. Scan radius of circle from user in main(). Define function circle() to find area and circumference of circle. Use parameter passing by reference. */

    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    circle(radius);

    return 0;
}
void circle(float &r)
{
    float area = 3.14 * r * r;
    float circumference = 2 * 3.14 * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
}

