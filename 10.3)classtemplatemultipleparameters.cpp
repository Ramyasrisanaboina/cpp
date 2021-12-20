#include<iostream>
using namespace std;
template <class t1,class t2>
class sample{
	private:
		t1 a;
		t2 b;
		public:
			void getdat()
			{
				cout<"enter a and b";
				cin>>a>>b;
				
			}
			void display()
			{
				cout<<"diaplaying values"<<endl;
			    cout<<"a="<<a<<endl<<"b="<<b<<endl;
			}
};
int main()
{
	sample <int,int> s1;
	cout<<"integer values"<<endl;
	s1.getdat();
	s1.display();
	sample <int,char> s2;
	cout<<"one integer and one character";
	s2.getdat();
	s2.display();
	return 0;
}
