#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class squre:public shapes
{
	private:
		int a;
	public:
		squre()
		{
			cout<<"enter side";
			cin>>a;
		}
		void area()
		{
			cout<<"area of squre:"<<a*a<<endl;
		}
	
};
class circle:public shapes
{
	private:
		int r;
	public:
		circle()
		{
			cout<<"enter radius of circle";
			cin>>r;
		}
		void area()
		{
			cout<<"area of circle:"<<3.14*r*r<<endl;
		}
};
int main()
{
	squre s,*sptr;
	sptr=&s;
	sptr->area();
	circle c,*cptr;
	cptr=&c;
	cptr->area();
	return 0;
}
