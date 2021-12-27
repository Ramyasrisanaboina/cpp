#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a,b;
		cout<<"enter values of a,b";
		cin>>a>>b;
		if(b==0)
		throw b;
		else
		cout<<a/b;
	}
		catch(int x)
		{
			cout<<"zero division error";
		}
	
	
}
