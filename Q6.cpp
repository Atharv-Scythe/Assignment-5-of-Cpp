#include<iostream>
using namespace std;
int main()
{
	//6.Keep scanning a number from user.Print addition of positive and negative numbers seperately stop when user enters 0.
	int num,addp=0,addn=0;
	
	while(1)
	{
		cout<<"\nEnter number =";
		cin>>num;
		if(num==0)
		{
			break;
		}
		
		if(num>0)
		{
			addp+=num;
		}
		else
		{
			addn+=num;
		}
	}
	
	cout<<"\nAddition of positive number ="<<addp<<"\nAddition of negetve numbers ="<<addn;
	
	return 0;
}
