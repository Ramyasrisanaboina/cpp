#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque <int> deq;
	int i;
	for(i=0;i<=5;++i)
	{
		deq.push_front(i);
		deq.push_back(i*5);
	}
	deque <int>::iterator d;
	d=deq.begin();
	++d;
	deq.insert(d,1,34);
	for(d=deq.begin();d!=deq.end();d++)
	cout<<*d<<" ";
	cout<<endl;
	deq.pop_front();
	deq.pop_back();
	for(d=deq.begin();d!=deq.end();d++)
	cout<<*d<<" ";
	cout<<endl;
	
	
}
