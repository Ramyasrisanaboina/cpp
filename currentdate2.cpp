#include<iostream>
using namespace std;
class date{
	public:
		void show(int dd,int mm,int yy)
		{
			cout<<"current date";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		void show(int dd,string mm,int yy)
		{
			cout<<"current date";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
			
		};
		int main()
		{
			date a;
			a.show(1,12,2002);
			a.show(1,"december",2002);
			return 0;
		}
