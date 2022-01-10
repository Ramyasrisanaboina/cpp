#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map <int,string> mp;
	mp.insert(make_pair(01,"namjoon"));
	mp.insert(make_pair(02,"seokjin"));
	mp.insert(make_pair(03,"yoongi"));
	mp.insert(make_pair(04,"heosek"));
	mp.insert(make_pair(05,"jimin"));
	mp.insert(make_pair(06,"taehyung"));
	mp.insert(make_pair(07,"jungkook"));
	mp.insert(make_pair(11,"ramya"));
	map <int,string>:: iterator pos;
	cout<<"empid"<<"\t"<<"name"<<endl;
	for(pos=mp.begin();pos!=mp.end();++pos)
	cout<<pos->first<<"\t"<<pos->second<<endl;
	pos=mp.find(05);
	cout<<"value at key 05 is="<<pos->second<<endl;
	mp.erase(11);
	cout<<"map after deletion"<<endl;
	cout<<"empid"<<"\t"<<"name"<<endl;
	for(pos=mp.begin();pos!=mp.end();++pos)
	cout<<pos->first<<"\t"<<pos->second<<endl;
	return 0;
	
}
