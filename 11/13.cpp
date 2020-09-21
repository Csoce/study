#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
	vector<pair<string,int>> ivec;
	string p;
	int i;
	while(cin>>p && cin>>i)
	{
		ivec.push_back(pair<string,int> (p,i));
		ivec.push_back({p,i});
		ivec.push_back(make_pair(p,i));
	}	
	for(const auto & a:ivec)
		cout<<a.first<<" "<<a.second<<endl;

	return 0;
}
