#include<iostream>
using namespace std;
class Base{
	public:
		virtual void show()
		{
			cout<<"show() of base class"<<endl;
		}
};
class derived:public Base
{
	public:
		virtual void show()
		{
			cout<<"show() of derived class"<<endl;
		}
};
int main()
{
	Base b,*bptr;
	bptr=&b;
	bptr->show();
	derived d,*dptr;
	dptr=&d;
	dptr->show();
	return 0;
}
