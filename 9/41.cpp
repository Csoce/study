#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<char> p={'1','2','3','4','5'};

	for(const auto & a:p)
		cout<<a;
	cout<<endl;


	string p1(p.begin(),p.end());
	cout<<p1<<endl;


	return 0;
}
