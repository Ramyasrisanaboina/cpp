#include<iostream>
using namespace std;
class DOB
{
	private:
		int dd,mm,yy;
		public:
			void show()
			{
				cout<<"enter date ,month,year";
				cin>>dd>>mm>>yy;
				cout<<"date of birth:";
				cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
			}
};
class student
{
	private:
		string name;
		int pinno;
		DOB d;
		public:
			void shows()
			{
			
			cout<<"enter name and pinno";
			cin>>name>>pinno;
			d.show();
			cout<<"name:"<<name<<endl;
			cout<<"pinno:"<<pinno<<endl;
		}
};
int main()
{
	student s;
	s.shows();
	return 0;
}
