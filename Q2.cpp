#include<iostream>
using namespace std;
int main()
{
	//2.Scan array of 6 integers from user.Find the largest value from array.(pointer notatio)
	
	int num[6],i;
	int *p= &num[0];
	
	cout<<"\nEnter 6 integers for array =";
	for(i=0;i<6;i++)
	{
		cin>>*(p+i);
	}
	
	int max=*(p);
	for(i=0;i<6;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
		}
	}
	
	cout<<"\nmaximum ="<<max;
	return 0;
}
