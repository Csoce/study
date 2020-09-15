#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main(void)
{
	vector<string> str{"cheng","jin","bo","longda","panda","zhu"};
	//auto p=	partition(str.begin(),str.end(),[](const string & s){return s.size()<5;});
	auto p=stable_partition(str.begin(),str.end(),[](const string & s){return s.size()<5;});
	for_each(p,str.end(),[](const string &s){cout<<s<<" ";});
	return 0;
}
