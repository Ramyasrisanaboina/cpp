#include<iostream>
using namespace std;
template <class T>
class sample{
	private:
		T x;
		T y;
		public:
			void get()
			{
				cout<<"enter values";
				cin>>x>>y;
				
			}
		void add()
		{
			cout<<"the sum is "<<x+y<<endl;
			
		}
};
int main()
{
	sample <int> s1;
	cout<<"enter integer values"<<endl;
	s1.get();
	s1.add();
	sample <float> s2;
	cout<<"enter float values"<<endl;
	s2.get();
	s2.add();
	return 0;
}
