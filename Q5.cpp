#include<iostream>
using namespace std;
int main()
{
	//5.Scan array of 4 alphabets from user.Print ascii value of each alphabet in array.([] notation)
	
	char ch[4];
	int i;
	cout<<"\nEnter 4 aplhabets=";
	for(i=0;i<4;i++)
	{
		cin>>ch[i];
	}
	
	for(i=0;i<4;i++)
	{
		cout<<(int)ch[i]<<" ";
	}
	
	return 0;
}
