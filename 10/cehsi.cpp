#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	vector<int> str;
	for(int i=0;i!=10;++i)
	{
		str.push_back(i);	
	}
	
	for(const auto & a:str)
		cout<<a<<" ";
	cout<<endl;
	return 0;
}
