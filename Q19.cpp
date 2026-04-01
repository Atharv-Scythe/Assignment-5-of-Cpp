#include <iostream>
using namespace std;
int square(int n);
int cube(int n);
int main()
{
    /* Q19. Scan a number from user in main(). Define functions to find square and cube of a number. Print both square and cube in main(). (Use parameter passing by value.) */

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int sq = square(num);
    int cb = cube(num);

    cout << "Square = " << sq << endl;
    cout << "Cube = " << cb << endl;

    return 0;
}
int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}
