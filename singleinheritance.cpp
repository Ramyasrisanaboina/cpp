#include<iostream>
using namespace std;
class A
{
	protected :
		int x;
		void get()
		{
			cout<<"enter x";
			cin>>x;
			
		}
};
class B:public A
{
	public:
		void cube()
		{
			get();
			cout<<"cube="<<x*x*x<<endl;
		}
};
int main()
{
	B b;
	b.cube();
	return 0;
	
}
