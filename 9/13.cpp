#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;
int main(void)
{
	list<int> a{1,2,3,4,5};
	vector<int> b{1,2,3,4,5,6};
	vector<double> c(a.begin(),a.end());
	for(auto & a:c)
		cout<<a<<" "<<endl;	
	vector<double> d(b.begin(),b.end());
	for(auto & a:d)
		cout<<a<<" "<<endl;	

	return 0;
}
