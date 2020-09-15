#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<list>

using namespace std;


int main(void)
{
	vector<int> num{1,2,3,4,5,6,7,8,9};
	list<int> n1,n2,n3;
	copy(num.begin(),num.end(),inserter(n1,n1.begin()));
	copy(num.begin(),num.end(),back_inserter(n2));
	copy(num.begin(),num.end(),front_inserter(n3));
	
	for_each(n1.begin(),n1.end(),
		[](const int & a){cout<<a<<" ";});cout<<endl;
	for_each(n2.begin(),n2.end(),
		[](const int & a){cout<<a<<" ";});cout<<endl;
	for_each(n3.begin(),n3.end(),
		[](const int & a){cout<<a<<" ";});cout<<endl;
	return 0;
}
