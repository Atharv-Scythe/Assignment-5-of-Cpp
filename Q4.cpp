#include<iostream>
using namespace std;
int main()
{
	//4.Scan array of 6 characters from user and print them.([] notation)
	
	char ch[6];
	cout<<"\nEnter 6 characters =";
	int i;
	for(i=0;i<6;i++)
	{
		cin>>ch[i];
	}
	
	for(i=0;i<6;i++)
	{
		cout<<ch[i]<<" ";
	}
	
	return 0;

}
