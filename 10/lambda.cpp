#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(void)
{
		
	vector<string> str;
	for(int i=0;i!=10;++i)
	{
		str.push_back(to_string(i));
	}
	for(const auto & a:str)
		cout<<a<<" ";
	cout<<endl;

	for_each(str.begin(),str.end(),[](const string & s){cout<<s<<" ";});

	return 0;
}
