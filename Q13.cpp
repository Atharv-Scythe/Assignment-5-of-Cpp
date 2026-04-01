#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /* Q13. WAP to check working of setw() and endl. */

    cout << "Without setw:" << endl;
    cout << 10 << 20 << 30 << endl;
	
    cout << "With setw:" << endl;
    cout << setw(5) << 10 << setw(5) << 20 << setw(5) << 30 << endl;

    cout << "Using endl to move to next line" << endl;
    cout << "Line 1" << endl;
    cout << "Line 2" << endl;

    return 0;
}
