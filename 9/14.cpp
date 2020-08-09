#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;
int main(void)
{
	list<char *> a{"13","123123"};
	vector<string> b(a.begin(),a.end());
	for(auto &a:b)
		cout<<a<<" "<<endl;	
	return 0;
}
