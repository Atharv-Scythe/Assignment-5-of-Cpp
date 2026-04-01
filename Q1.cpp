#include<iostream>
using namespace std;
int main()
{
	/*
	1.Scan array of 10 integers.Copy it in another array.
	Print both arrays.
	([ ] notation)*/
	
	int i,num[10],copy[10];
	cout<<"\nEnter 10 integers for array = ";
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	
	for(i=0;i<10;i++)
	{
		copy[i]=num[i];
	}
	
	cout<<"\nThe copied array =";
	for(i=0;i<10;i++)
	{
		cout<<copy[i]<<" ";
	}
	
	return 0;
}
