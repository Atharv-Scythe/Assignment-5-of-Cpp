#include <iostream>
using namespace std;
void demo();
int main()
{
    /* Q14. WAP to explain static concept.(Perform some experiments on your own and get familiar with static) */

    cout << "Calling demo function 3 times:" << endl;

    demo();
    demo();
    demo();

    return 0;
}
void demo()
{
    static int x= 0;
    x++;
    cout << "Count = " << x << endl;
}
