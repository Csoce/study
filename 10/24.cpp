#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s,string::size_type sz)
{
	return s.size()<sz;
}
	
int main(void)
{
	string p="1231";
	vector<int> num{1,2,3,4,5,6,7,8,9};
	auto i=find_if(num.begin(),num.end(),
	bind(check_size,p,_1)
	);	
	if(i!=num.end())
		cout<<*i<<endl;
	
	return 0;
}
