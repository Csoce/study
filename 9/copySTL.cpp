#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(void)
{
	deque<string> a2{"123","234","455","asf"};
	deque<string> a1(a2.begin(),--a2.end());
	for(auto &a:a1)
	{
		cout<<a<<endl;
	}	
	return 0;
}
