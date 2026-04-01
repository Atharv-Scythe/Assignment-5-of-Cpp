#include<iostream>
using namespace std;
int main()
{
	//3.Declare and itialize an array of 8 integers.Find the smallest value from array.(pointer notation)
	int num[8]={12,75,42,62,6754,2,1,345};
	int *p=num;
	int min=*p;
	for(int i=0;i<6;i++)
	{
		if(*(p+i)<min)
		{
			min=*(p+i);
		}
	}
	
	cout<<"\nThe smallest integer ="<<min;
	
	return 0;

}
