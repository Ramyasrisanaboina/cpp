#include<iostream>
using namespace std;
class add{
	private:
		int x,y;
		public:
			add()
			{
				cout<<"enter two numbers";
				cin>>x>>y;
				
				
			}
			void show()
			{
				cout<<"the sum is"<<x+y;
			}
};
int main()
{
	add a,*aptr;
	aptr=&a;
	aptr->show();
	return 0;
}
