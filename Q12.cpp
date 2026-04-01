#include <iostream>
using namespace std;
int main()
{
    /* Q12. WAP to understand the concept of enumeration. */
    enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    Day today = Wednesday;
    cout << "Value of today (enum index): " << today << endl;

    if(today == Wednesday)
    {
        cout << "Today is Wednesday";
    }
    return 0;
}
