#include <iostream>
using namespace std;
int main()
{
	/* Q7. Scan array of 8 integers from user. Write menu driven program for following activities.
   - find largest value
   - find smallest value
   - Scan a number from user and check if it is present in the array or not.
	*/
    int arr[8], choice, num;
   	cout<<"\nEnter 8 integers="; 
    for(int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n1. Find Largest\n2. Find Smallest\n3. Search Number\n4. Exit\n";
        cout<<"\nEnter your choice";
        cin >> choice;

        if(choice == 1)
        {
            int max = arr[0];
            for(int i = 1; i < 8; i++)
            {
                if(arr[i] > max)
                {
                    max = arr[i];
                }
            }
            cout << max << endl;
        }
        else if(choice == 2)
        {
            int min = arr[0];
            for(int i = 1; i < 8; i++)
            {
                if(arr[i] < min)
                {
                    min = arr[i];
                }
            }
            cout << min << endl;
        }
        else if(choice == 3)
        {
        	cout<<"\nEnter number=";
            cin >> num;
            bool found = false;

            for(int i = 0; i < 8; i++)
            {
                if(arr[i] == num)
                {
                    found = true;
                    break;
                }
            }

            if(found)
                cout << "Present\n";
            else
                cout << "Not Present\n";
        }

    } while(choice != 4);

    return 0;
}
