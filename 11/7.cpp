#include<iostream>
#include<map>
#include<utility>
#include<vector>

using namespace std;

int main(void)
{
	map<string,vector<pair<string,int>>> smap;
	string p1,p2;	
	int i;
	while(cin>>p1 && cin>>p2 && cin>>i)
	{
		smap[p1].push_back(make_pair(p2,i));
	}		

	for(const auto & a:smap)
	{
		cout<<a.first<<"------"<<endl;
		for(const auto & b: a.second)
			cout<<b.first <<" "<<b.second<<" "<<endl;
	}

	return 0;
}
