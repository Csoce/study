#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(void)
{
	list<deque<int>> NLint;
	NLint.push_back((deque<int>){1,2,3,4,5,6,7});
	deque<int> DLint{1,2,3,4,5,6};	
	NLint.push_back(DLint);
	for(auto a=NLint.begin();a!=NLint.end();++a)
	{
		for(auto b=(*a).begin();b!=(*a).end();++b)
		{
			cout<<*b<<" ";
		}
		cout<<endl;
	}
	return 0;
}
