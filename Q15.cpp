#include <iostream>
using namespace std;
void rectangle(int &l, int &w);
int main()
{
    /* Q15. Scan length and width of rectangle in main(). 
	Define function rectangle() to find area and perimeter of rectangle. Use parameter passing by reference. */

    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    rectangle(length, width);

    return 0;
}
void rectangle(int &l, int &w)
{
    int area = l * w;
    int perimeter = 2 * (l + w);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}
