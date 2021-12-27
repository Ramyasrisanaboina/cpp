#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a[5]={1,2,3,4,5};
		int index;
		cout<<"enter index";
		cin>>index;
		if(index>5)
		throw index;
		else if(index<0)
		throw "index should not be negative";
		else
		{
			a[index]=100;
			cout<<a[index];
			
		}
	}
	catch(int x)
	{
		cout<<"array index out of bounds";
	}
	catch(const char *m)
	{
		cout<<m;
	}
}
