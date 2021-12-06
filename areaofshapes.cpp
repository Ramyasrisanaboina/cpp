#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area(int x)=0;
};
class squre:public shapes
{
	public:
		void area(int x)
		{
			cout<<"area of squre:"<<x*x<<endl;
		}
	
};
class circle:public shapes
{
	public:
		void area(int x)
		{
			cout<<"area of circle:"<<3.14*x*x<<endl;
		}
};
int main()
{
	squre s,*sptr;
	sptr=&s;
	sptr->area(10);
	circle c,*cptr;
	cptr=&c;
	cptr->area(12);
	return 0;
}
