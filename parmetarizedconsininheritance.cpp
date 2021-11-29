#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
			A(int m)
			{
				x=m;
				cout<<"the value of x:"<<x<<endl;
				
			}
};
class B:public A
{
	protected:
		int y;
		public:
			B(int n):A(13)
			{
				y=n;
				cout<<"the value of y:"<<y<<endl;
			}
		
};
int main()
{
	B b(1);
	return 0;
}
