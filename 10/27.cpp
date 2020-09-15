#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main(void)
{	
	vector<string> sp{"hen1","hen1","hen","lenovo","chen"};
	list<string> s2;

	sort(sp.begin(),sp.end());

	unique_copy(sp.begin(),sp.end(),back_inserter(s2));
	
	for(const auto & a:sp)
		cout<<a<<" ";
	cout<<endl;

	for(const auto & a:s2)
		cout<<a<<" ";
	cout<<endl;

	return 0;
}
