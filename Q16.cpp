#include <iostream>
using namespace std;
void rectangle(int *l, int *w);
int main()
{
    /* Q16. Repeat question 15. Use parameter passing by address. */

    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    rectangle(&length, &width);

    return 0;
}
void rectangle(int *l, int *w)
{
    int area = (*l) * (*w);
    int perimeter = 2 * ((*l) + (*w));

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

